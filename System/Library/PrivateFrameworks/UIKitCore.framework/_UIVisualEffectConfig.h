/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:20:46 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSMutableArray, _UIVisualEffectLayerConfig, NSArray;

@interface _UIVisualEffectConfig : NSObject {

	NSMutableArray* _layerConfigs;
	_UIVisualEffectLayerConfig* _contentConfig;

}

@property (nonatomic,readonly) NSArray * layerConfigs;                                  //@synthesize layerConfigs=_layerConfigs - In the implementation block
@property (nonatomic,readonly) _UIVisualEffectLayerConfig * contentConfig;              //@synthesize contentConfig=_contentConfig - In the implementation block
+(id)configWithContentConfig:(id)arg1 ;
+(id)configWithLayerConfigs:(id)arg1 ;
-(id)description;
-(void)addLayerConfig:(id)arg1 ;
-(void)enumerateLayerConfigs:(/*^block*/id)arg1 ;
-(NSArray *)layerConfigs;
-(_UIVisualEffectLayerConfig *)contentConfig;
@end

