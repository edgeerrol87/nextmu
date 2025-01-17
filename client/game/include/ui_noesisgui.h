#ifndef __UI_NOESISGUI_H__
#define __UI_NOESISGUI_H__

#pragma once

#if NEXTMU_UI_LIBRARY == NEXTMU_UI_NOESISGUI
class Noesis::IView;
class NGApplicationContext;

namespace UINoesis
{
	const mu_boolean Initialize();
	void Destroy();

	NGApplicationContext *GetContext();

	const mu_boolean CreateView(const mu_utf8string filename);
	Noesis::IView *GetView();

	void Update();
	void RenderOffscreen();
	void RenderOnscreen();

	const mu_boolean OnEvent(const SDL_Event *event);
};
#endif

#endif