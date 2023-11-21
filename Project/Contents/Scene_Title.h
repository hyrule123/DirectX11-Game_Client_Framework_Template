#pragma once
#include <EngineBase/Engine/IScene.h>

namespace ehw
{
	class Scene_Title : public IScene
	{
	public:
		Scene_Title();
		virtual ~Scene_Title();

		virtual void Init() override;
		virtual void Update() override;
		virtual void FixedUpdate() override;
		virtual void Render() override;

		virtual void OnEnter() override;
		virtual void OnExit() override;

	private:
	};
}
