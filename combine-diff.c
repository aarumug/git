			p->path = (char*) &(p->parent[num_parent]);
	struct xdiff_emit_state xm;

	ecb.outf = xdiff_outf;
	ecb.priv = &state;
	state.xm.consume = consume_line;
	xdi_diff(&parent_file, result_file, &xpp, &xecfg, &ecb);
		struct sline *sl = &sline[lno];
			sl = &sline[lno++];
			size_t len = xsize_t(st.st_size);
			result_size = len;
			result = xmalloc(len + 1);
			if (result_size != readlink(elem->path, result, len)) {
			result[len] = 0;
				struct strbuf buf;
				strbuf_init(&buf, 0);
			dump_quoted_path("--- ", opt->a_prefix, elem->path,
			dump_quoted_path("+++ ", opt->b_prefix, elem->path,
		hashcpy((unsigned char*)(parent + num_parent),