/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:15:51 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSMutableDictionary;

@interface OKProducerPresetsManager : NSObject {

	NSMutableDictionary* _presetsByFamily;

}
+(id)defaultManager;
-(id)init;
-(void)dealloc;
-(id)presetForUniqueIdentifier:(id)arg1 ;
-(id)_presetsByNameForFamily:(id)arg1 ;
-(id)presetsForFamily:(id)arg1 ;
-(id)_defaultPresetsByName;
-(id)defaultPresetsForFamily:(id)arg1 ;
-(id)presetWithUniqueIdentifier:(id)arg1 ;
-(id)defaultPresets;
@end

