/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:14:06 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SceneKit/SceneKit-Structs.h>
#import <libobjc.A.dylib/SCNAnimatable.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, SCNOrderedDictionary, NSMutableDictionary, UIColor, NSArray;

@interface SCNMaterialProperty : NSObject <SCNAnimatable, NSSecureCoding> {

	unsigned _isPresentationInstance : 1;
	unsigned _isCommonProfileProperty : 1;
	unsigned _sRGB : 1;
	unsigned _preventWarmup : 1;
	char _propertyType;
	id _parent;
	NSString* _customSlotName;
	SCNOrderedDictionary* _animations;
	NSMutableDictionary* _bindings;
	UIColor* _borderColor;
	id _contents;
	unsigned char _contentType;
	long long _mappingChannel;
	unsigned char _minificationFilter;
	unsigned char _magnificationFilter;
	unsigned char _mipFilter;
	unsigned char _wrapS;
	unsigned char _wrapT;
	unsigned char _textureComponents;
	float _intensity;
	float _maxAnisotropy;
	_C3DEffectSlot* _customSlot;
	C3DImageRef _c3dImage;
	SCNMatrix4* _contentTransform;
	id _runtimeResolvedPath;

}

@property (nonatomic,retain) id contents; 
@property (assign,nonatomic) double intensity; 
@property (assign,nonatomic) long long minificationFilter; 
@property (assign,nonatomic) long long magnificationFilter; 
@property (assign,nonatomic) long long mipFilter; 
@property (assign,nonatomic) SCNMatrix4 contentsTransform; 
@property (assign,nonatomic) long long wrapS; 
@property (assign,nonatomic) long long wrapT; 
@property (assign,nonatomic) long long mappingChannel; 
@property (assign,nonatomic) long long textureComponents; 
@property (assign,nonatomic) double maxAnisotropy; 
@property (readonly) NSArray * animationKeys; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(C3DImageRef)copyC3DImageFromImage:(id)arg1 ;
+(id)copyImageFromC3DImage:(C3DImageRef)arg1 ;
+(C3DImageRef)copyC3DImageFromImage:(id)arg1 textureOptions:(int)arg2 wasCached:(BOOL*)arg3 ;
+(C3DImageRef)_copyC3DImageFromImageData:(id)arg1 typeID:(unsigned long long)arg2 ;
+(C3DImageRef)copyC3DImageFromImage:(id)arg1 textureOptions:(int)arg2 ;
+(id)_copyImageFromC3DImage:(C3DImageRef)arg1 ;
+(id)materialPropertyWithContents:(id)arg1 ;
+(id)dvt_supportedTypesForPropertyContents;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)copy;
-(NSString *)description;
-(id)init;
-(void)dealloc;
-(id)floatValue;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)content;
-(id)contents;
-(id)parent;
-(id)slotName;
-(long long)mipFilter;
-(void)setMipFilter:(long long)arg1 ;
-(double)maxAnisotropy;
-(void)setMaxAnisotropy:(double)arg1 ;
-(char)propertyType;
-(id)propertyName;
-(void)addAnimation:(id)arg1 ;
-(id)layer;
-(void)removeAnimationForKey:(id)arg1 ;
-(id)animationForKey:(id)arg1 ;
-(id)image;
-(void)setContents:(id)arg1 ;
-(id)color;
-(void)setColor:(id)arg1 ;
-(long long)magnificationFilter;
-(void)setMagnificationFilter:(long long)arg1 ;
-(long long)minificationFilter;
-(void)setMinificationFilter:(long long)arg1 ;
-(void)addAnimation:(id)arg1 forKey:(id)arg2 ;
-(void)setImage:(id)arg1 ;
-(void)removeAllAnimations;
-(NSArray *)animationKeys;
-(id)borderColor;
-(void)setBorderColor:(id)arg1 ;
-(SCNMatrix4)contentsTransform;
-(void)setContentsTransform:(SCNMatrix4)arg1 ;
-(void)setLayer:(id)arg1 ;
-(void)setContent:(id)arg1 ;
-(double)intensity;
-(void)setIntensity:(double)arg1 ;
-(id)attachment;
-(void)setAttachment:(id)arg1 ;
-(void)setFloatValue:(id)arg1 ;
-(long long)mappingChannel;
-(void)setMappingChannel:(long long)arg1 ;
-(long long)textureComponents;
-(void)setTextureComponents:(long long)arg1 ;
-(id)avPlayer;
-(void*)getC3DImageRef;
-(void)_setImagePath:(id)arg1 withResolvedPath:(id)arg2 ;
-(void)setWrapS:(long long)arg1 ;
-(void)setWrapT:(long long)arg1 ;
-(const void*)__CFObject;
-(C3DSceneRef)sceneRef;
-(_C3DEffectSlot*)effectSlot;
-(void)addAnimationPlayer:(id)arg1 forKey:(id)arg2 ;
-(id)_scnAnimationForKey:(id)arg1 ;
-(id)animationPlayerForKey:(id)arg1 ;
-(C3DAnimationManagerRef)animationManager;
-(void)_pauseAnimation:(BOOL)arg1 forKey:(id)arg2 pausedByNode:(BOOL)arg3 ;
-(void)removeAnimationForKey:(id)arg1 blendOutDuration:(double)arg2 ;
-(void)removeAnimationForKey:(id)arg1 fadeOutDuration:(double)arg2 ;
-(void)pauseAnimationForKey:(id)arg1 ;
-(void)resumeAnimationForKey:(id)arg1 ;
-(void)setSpeed:(double)arg1 forAnimationKey:(id)arg2 ;
-(BOOL)isAnimationForKeyPaused:(id)arg1 ;
-(BOOL)__removeAnimation:(id)arg1 forKey:(id)arg2 ;
-(void)_syncObjCAnimations;
-(void)_copyAnimationsFrom:(id)arg1 ;
-(id)_scnBindings;
-(void)bindAnimatablePath:(id)arg1 toObject:(id)arg2 withKeyPath:(id)arg3 options:(id)arg4 ;
-(void)unbindAnimatablePath:(id)arg1 ;
-(void)removeAllBindings;
-(id)copyAnimationChannelForKeyPath:(id)arg1 animation:(id)arg2 ;
-(BOOL)isPausedOrPausedByInheritance;
-(id)presentationInstance;
-(void)_syncObjCModel;
-(void)parentWillDie:(id)arg1 ;
-(id)initWithParent:(id)arg1 propertyType:(char)arg2 ;
-(void)copyPropertiesFrom:(id)arg1 ;
-(id)presentationMaterialProperty;
-(_C3DEffectCommonProfile*)commonProfile;
-(void)_setColor:(id)arg1 ;
-(void)_setC3DImageRef:(C3DImageRef)arg1 ;
-(void)_setupContentsFromC3DImage;
-(BOOL)_hasDefaultValues;
-(void)unlinkCustomPropertyWithParent:(id)arg1 ;
-(void)linkCustomPropertyWithParent:(id)arg1 andCustomName:(id)arg2 ;
-(void)_setParent:(id)arg1 ;
-(void)setTextureProvider:(id)arg1 ;
-(id)textureProvider;
-(void)_clearContents;
-(id)_animationPathForKey:(id)arg1 ;
-(void)_updateMaterialColor:(id)arg1 ;
-(void)_updateMaterialNumber:(id)arg1 ;
-(_C3DTextureSampler*)textureSampler;
-(void)_updateMaterialFilters;
-(long long)_presentationMappingChannel;
-(_C3DEffectSlot*)effectSlotCreateIfNeeded:(BOOL)arg1 ;
-(void)_updateMaterialBorderColor:(id)arg1 ;
-(void)_updateMaterialAttachment:(id)arg1 ;
-(int)_textureOptions;
-(void)_updateMaterialImage:(id)arg1 ;
-(void)_updateC3DImageWithContents:(id)arg1 ;
-(void)_updateMaterialSKScene:(id)arg1 ;
-(void)_updateMaterialSKTexture:(id)arg1 ;
-(void)_updateMaterialLayer:(id)arg1 ;
-(void)_updateMaterialAVPlayer:(id)arg1 ;
-(void)_updateMaterialTextureProvider:(id)arg1 ;
-(void)_layerDidChange:(id)arg1 ;
-(void)_updateMaterialUIComponent:(id)arg1 ;
-(void)setSkScene:(id)arg1 ;
-(void)setSkTexture:(id)arg1 ;
-(void)setMtlTexture:(id)arg1 ;
-(void)setUIView:(id)arg1 ;
-(void)setUIWindow:(id)arg1 ;
-(void)setAvPlayer:(id)arg1 ;
-(void)_updateMaterialProceduralContents:(id)arg1 ;
-(void)_updateMaterialMTLTexture:(id)arg1 ;
-(void)__allocateContentTransformIfNeeded;
-(void)_updateMaterialPropertyTransform:(C3DMatrix4x4)arg1 ;
-(long long)wrapS;
-(long long)wrapT;
-(BOOL)sRGBTexture;
-(void)setSRGBTexture:(BOOL)arg1 ;
-(id)initPresentationMaterialPropertyWithModelProperty:(id)arg1 ;
-(C3DColor4)borderColor4;
-(void)_skSceneDidChange:(id)arg1 ;
-(void)_customEncodingOfSCNMaterialProperty:(id)arg1 ;
-(void)_customDecodingOfSCNMaterialProperty:(id)arg1 ;
-(void)_didDecodeSCNMaterialProperty:(id)arg1 ;
-(id)initWithParent:(id)arg1 andCustomName:(id)arg2 ;
-(id)__runtimeResolvedPath;
-(C3DColor4)color4;
-(id)pvrtcData;
-(id)skScene;
-(id)skTexture;
-(id)UIView;
-(void)setProceduralContents:(id)arg1 ;
-(id)proceduralContents;
-(id)mtlTexture;
@end

