import { sveltekit } from '@sveltejs/kit/vite';
import { defineConfig } from 'vite';
import { viteStaticCopy } from 'vite-plugin-static-copy';

export default defineConfig({
	resolve: {
		alias: {
			'/config_terminal': process.env.WEBVM_MODE == "github" ? 'config_github_terminal.js' : 'config_public_terminal.js',
			"@leaningtech/cheerpx": process.env.CX_URL ? process.env.CX_URL : "@leaningtech/cheerpx"
		}
	},
	build: {
		target: "es2022"
	},
	plugins: [
		sveltekit(),
		viteStaticCopy({
			targets: [
				{ src: 'iceland.ico', dest: '' },
				{ src: 'scrollbar.css', dest: '' },
				{ src: 'banner.txt', dest: '' },
				{ src: 'customlaufey.css', dest: '' },
				{ src: 'Virden_Manitoba.jpg', dest: '' },
				{ src: 'Beuningen_Gelderland.jpg', dest: '' },
				{ src: 'serviceWorker.js', dest: '' },
				{ src: 'login.html', dest: '' },
				{ src: 'assets/', dest: '' },
				{ src: 'documents/', dest: '' }
			]
		})
	]
});
