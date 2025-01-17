#ifndef __UI_RMLUI_H__
#define __UI_RMLUI_H__

#pragma once

#if NEXTMU_UI_LIBRARY == NEXTMU_UI_RMLUI
namespace UIRmlUI
{
	const mu_boolean Initialize();
	const mu_boolean CreateView(const mu_utf8string filename);
	void Destroy();

	void Update();
	void RenderOnscreen();
	void ReleaseGarbage();

	const mu_boolean OnEvent(const SDL_Event *event);
};
#endif

#endif