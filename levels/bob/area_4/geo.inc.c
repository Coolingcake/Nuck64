#include "src/game/envfx_snow.h"

const GeoLayout bob_area_4_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, bob_dl_Book01_003_mesh_layer_1),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, bob_dl_Book02_003_mesh_layer_1),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, bob_dl_Book03_003_mesh_layer_1),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, bob_dl_Book04_003_mesh_layer_1),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, bob_dl_Cabinet_003_mesh_layer_1),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, bob_dl_Chair_003_mesh_layer_1),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, bob_dl_CoffeeTable_003_mesh_layer_1),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, bob_dl_Computer_003_mesh_layer_1),
		GEO_TRANSLATE_NODE(LAYER_OPAQUE, 424, -25, 6034),
		GEO_OPEN_NODE(),
			GEO_SCALE(LAYER_OPAQUE, 806265),
			GEO_OPEN_NODE(),
				GEO_DISPLAY_LIST(LAYER_OPAQUE, bob_dl_Couch_006_mesh_layer_1),
				GEO_DISPLAY_LIST(LAYER_OPAQUE, bob_dl_pegs_003_mesh_layer_1),
				GEO_DISPLAY_LIST(LAYER_OPAQUE, bob_dl_pillow1_003_mesh_layer_1),
				GEO_DISPLAY_LIST(LAYER_OPAQUE, bob_dl_pillow2_003_mesh_layer_1),
				GEO_DISPLAY_LIST(LAYER_OPAQUE, bob_dl_pillow3_003_mesh_layer_1),
			GEO_CLOSE_NODE(),
		GEO_CLOSE_NODE(),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, bob_dl_DeskTable_003_mesh_layer_1),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, bob_dl_EucalyptsePlant_003_mesh_layer_1),
		GEO_DISPLAY_LIST(LAYER_ALPHA, bob_dl_EucalyptsePlant_003_mesh_layer_4),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, bob_dl_FloorLamp_003_mesh_layer_1),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, bob_dl_FrameHor_003_mesh_layer_1),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, bob_dl_FrameVert_003_mesh_layer_1),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, bob_dl_FrameVertSkinny_003_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, 1589, 2513, 5958, bob_dl_fuzzDEFALT_003_mesh_layer_1),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, bob_dl_Hilma_003_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, 3135, 1170, 6507, bob_dl_joke_003_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, 850, 604, 5997, 0, 0, 90, bob_dl_kellyflat_mesh_layer_1),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, bob_dl_laptop_003_mesh_layer_1),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, bob_dl_Painting_003_mesh_layer_1),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, bob_dl_PCTable_003_mesh_layer_1),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, bob_dl_remote_003_mesh_layer_1),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, bob_dl_Room_003_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, 414, -4, 5037, bob_dl_Rug_003_mesh_layer_1),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, bob_dl_SideTable_003_mesh_layer_1),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, bob_dl_SmallLamp_003_mesh_layer_1),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, bob_dl_SmallPlant_003_mesh_layer_1),
		GEO_DISPLAY_LIST(LAYER_ALPHA, bob_dl_SmallPlant_003_mesh_layer_4),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, bob_dl_SnakePlant_003_mesh_layer_1),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, bob_dl_TV_003_mesh_layer_1),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, bob_dl_Vape_003_mesh_layer_1),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, bob_dl_VapeHolder_003_mesh_layer_1),
	GEO_CLOSE_NODE(),
	GEO_RETURN(),
};
const GeoLayout bob_area_4[] = {
	GEO_NODE_SCREEN_AREA(10, SCREEN_WIDTH/2, SCREEN_HEIGHT/2, SCREEN_WIDTH/2, SCREEN_HEIGHT/2),
	GEO_OPEN_NODE(),
		GEO_ZBUFFER(0),
		GEO_OPEN_NODE(),
			GEO_NODE_ORTHO(100.0000),
			GEO_OPEN_NODE(),
				GEO_BACKGROUND(BACKGROUND_HAUNTED, geo_skybox_main),
			GEO_CLOSE_NODE(),
		GEO_CLOSE_NODE(),
		GEO_ZBUFFER(1),
		GEO_OPEN_NODE(),
			GEO_CAMERA_FRUSTUM_WITH_FUNC(45.0000, 100, 30000, geo_camera_fov),
			GEO_OPEN_NODE(),
				GEO_CAMERA(CAMERA_MODE_8_DIRECTIONS, -7596, 0, -6359, -7596, -100, -6359, geo_camera_main),
				GEO_OPEN_NODE(),
					GEO_BRANCH(1, bob_area_4_geo),
					GEO_RENDER_OBJ(),
					GEO_ASM(ENVFX_MODE_NONE, geo_envfx_main),
				GEO_CLOSE_NODE(),
			GEO_CLOSE_NODE(),
		GEO_CLOSE_NODE(),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, bob_dl_material_revert_render_settings),
		GEO_DISPLAY_LIST(LAYER_ALPHA, bob_dl_material_revert_render_settings),
	GEO_CLOSE_NODE(),
	GEO_END(),
};
