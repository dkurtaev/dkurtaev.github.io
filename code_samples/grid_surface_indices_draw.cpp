document.write('<link rel="stylesheet" href="code_samples/gist-embed-b03925b9c18fa42b22f168e7d17a7ca70ca50a4126cbfca9f91a1a8bc79b5905.css">')
document.write('<div id=\"gist39133102\" class=\"gist\">\n    <div class=\"gist-file\">\n      <div class=\"gist-data\">\n        <div class=\"js-gist-file-update-container js-task-list-container file-box\">\n  <div id=\"file-grid_surface_indices_draw-cpp\" class=\"file\">\n    \n\n  <div itemprop=\"text\" class=\"blob-wrapper data type-c\">\n      <table class=\"highlight tab-size js-file-line-container\" data-tab-size=\"8\">\n      <tr>\n        <td id=\"file-grid_surface_indices_draw-cpp-L1\" class=\"blob-num js-line-number\" data-line-number=\"1\"><\/td>\n        <td id=\"file-grid_surface_indices_draw-cpp-LC1\" class=\"blob-code blob-code-inner js-file-line\"><span class=\"pl-k\">void<\/span> <span class=\"pl-en\">Surface::Draw<\/span>() {<\/td>\n      <\/tr>\n      <tr>\n        <td id=\"file-grid_surface_indices_draw-cpp-L2\" class=\"blob-num js-line-number\" data-line-number=\"2\"><\/td>\n        <td id=\"file-grid_surface_indices_draw-cpp-LC2\" class=\"blob-code blob-code-inner js-file-line\">  <span class=\"pl-c1\">glEnableClientState<\/span>(GL_NORMAL_ARRAY);<\/td>\n      <\/tr>\n      <tr>\n        <td id=\"file-grid_surface_indices_draw-cpp-L3\" class=\"blob-num js-line-number\" data-line-number=\"3\"><\/td>\n        <td id=\"file-grid_surface_indices_draw-cpp-LC3\" class=\"blob-code blob-code-inner js-file-line\">  <span class=\"pl-c1\">glNormalPointer<\/span>(GL_FLOAT, <span class=\"pl-c1\">0<\/span>, normals_array);<\/td>\n      <\/tr>\n      <tr>\n        <td id=\"file-grid_surface_indices_draw-cpp-L4\" class=\"blob-num js-line-number\" data-line-number=\"4\"><\/td>\n        <td id=\"file-grid_surface_indices_draw-cpp-LC4\" class=\"blob-code blob-code-inner js-file-line\">\n<\/td>\n      <\/tr>\n      <tr>\n        <td id=\"file-grid_surface_indices_draw-cpp-L5\" class=\"blob-num js-line-number\" data-line-number=\"5\"><\/td>\n        <td id=\"file-grid_surface_indices_draw-cpp-LC5\" class=\"blob-code blob-code-inner js-file-line\">  <span class=\"pl-c1\">glEnableClientState<\/span>(GL_VERTEX_ARRAY);<\/td>\n      <\/tr>\n      <tr>\n        <td id=\"file-grid_surface_indices_draw-cpp-L6\" class=\"blob-num js-line-number\" data-line-number=\"6\"><\/td>\n        <td id=\"file-grid_surface_indices_draw-cpp-LC6\" class=\"blob-code blob-code-inner js-file-line\">  <span class=\"pl-c1\">glVertexPointer<\/span>(<span class=\"pl-c1\">3<\/span>, GL_FLOAT, <span class=\"pl-c1\">0<\/span>, vertices_array);<\/td>\n      <\/tr>\n      <tr>\n        <td id=\"file-grid_surface_indices_draw-cpp-L7\" class=\"blob-num js-line-number\" data-line-number=\"7\"><\/td>\n        <td id=\"file-grid_surface_indices_draw-cpp-LC7\" class=\"blob-code blob-code-inner js-file-line\">  <span class=\"pl-c1\">glDrawElements<\/span>(GL_TRIANGLES, <span class=\"pl-c1\">3<\/span> * n_triangles, GL_UNSIGNED_SHORT,<\/td>\n      <\/tr>\n      <tr>\n        <td id=\"file-grid_surface_indices_draw-cpp-L8\" class=\"blob-num js-line-number\" data-line-number=\"8\"><\/td>\n        <td id=\"file-grid_surface_indices_draw-cpp-LC8\" class=\"blob-code blob-code-inner js-file-line\">                 indices_array);<\/td>\n      <\/tr>\n      <tr>\n        <td id=\"file-grid_surface_indices_draw-cpp-L9\" class=\"blob-num js-line-number\" data-line-number=\"9\"><\/td>\n        <td id=\"file-grid_surface_indices_draw-cpp-LC9\" class=\"blob-code blob-code-inner js-file-line\">}<\/td>\n      <\/tr>\n<\/table>\n\n  <\/div>\n\n  <\/div>\n  \n<\/div>\n\n      <\/div>\n      <div class=\"gist-meta\">\n        <a href=\"https://gist.github.com/dkurtaev/e783fded30b882e91dc0c492fbe2aef5/raw/8666c031263140d333839c411533d9dd2658f777/grid_surface_indices_draw.cpp\" style=\"float:right\">view raw<\/a>\n        <a href=\"https://gist.github.com/dkurtaev/e783fded30b882e91dc0c492fbe2aef5#file-grid_surface_indices_draw-cpp\">grid_surface_indices_draw.cpp<\/a>\n        hosted with &#10084; by <a href=\"https://github.com\">GitHub<\/a>\n      <\/div>\n    <\/div>\n<\/div>\n')
