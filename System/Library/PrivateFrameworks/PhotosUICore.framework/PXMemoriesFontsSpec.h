/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:13:52 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <PhotosUICore/PhotosUICore-Structs.h>
@class NSDictionary;

@interface PXMemoriesFontsSpec : NSObject {

	NSDictionary* _titleTextAttributes;
	NSDictionary* _fallbackTitleTextAttributes;
	NSDictionary* _subtitleTextAttributes;
	double _baselineDistance;
	UIEdgeInsets _padding;

}

@property (nonatomic,readonly) NSDictionary * titleTextAttributes;                      //@synthesize titleTextAttributes=_titleTextAttributes - In the implementation block
@property (nonatomic,readonly) NSDictionary * fallbackTitleTextAttributes;              //@synthesize fallbackTitleTextAttributes=_fallbackTitleTextAttributes - In the implementation block
@property (nonatomic,readonly) NSDictionary * subtitleTextAttributes;                   //@synthesize subtitleTextAttributes=_subtitleTextAttributes - In the implementation block
@property (nonatomic,readonly) double baselineDistance;                                 //@synthesize baselineDistance=_baselineDistance - In the implementation block
@property (nonatomic,readonly) UIEdgeInsets padding;                                    //@synthesize padding=_padding - In the implementation block
+(UIEdgeInsets)paddingForFontSet:(long long)arg1 specSet:(long long)arg2 variant:(long long)arg3 layoutMargins:(UIEdgeInsets)arg4 width:(double)arg5 shouldScale:(BOOL)arg6 forHeaderTile:(BOOL)arg7 ;
+(double)baselineDistanceForFontSet:(long long)arg1 specSet:(long long)arg2 variant:(long long)arg3 size:(CGSize)arg4 shouldScale:(BOOL)arg5 ;
+(id)textAttributesForFontSet:(long long)arg1 specSet:(long long)arg2 labelKind:(long long)arg3 variant:(long long)arg4 size:(CGSize)arg5 shouldScale:(BOOL)arg6 ;
+(void)preloadFontsSpecsForExtendedTraitCollection:(id)arg1 ;
+(id)_fontSpecCache;
+(long long)capitalizationStyleForLabelKind:(long long)arg1 ;
+(long long)numberOfLinesForLabelKind:(long long)arg1 ;
+(id)textAttributesForFontName:(id)arg1 fontSize:(double)arg2 lineHeight:(double)arg3 tracking:(double)arg4 stroke:(double)arg5 shadow:(id)arg6 capitalizationStyle:(long long)arg7 ;
+(id)memoriesFontsSpecForDescriptor:(PXViewSpecDescriptor)arg1 extendedTraitCollection:(id)arg2 ;
+(id)_fontSetByTitleFontName;
+(id)_titleFontNameByFontSet;
+(id)supportedTitleFontNames;
+(void)_getSpecSet:(out long long*)arg1 variant:(out long long*)arg2 forDescriptor:(PXViewSpecDescriptor)arg3 extendedTraitCollection:(id)arg4 ;
+(long long)_memoryLabelKindForDescriptor:(PXViewSpecDescriptor)arg1 ;
+(double)_playButtonPaddingForFontSet:(long long)arg1 specSet:(long long)arg2 variant:(long long)arg3 deviceMargin:(double)arg4 forHeaderTile:(BOOL)arg5 ;
-(id)_initWithIdentifier:(PXMemoryFontsSpecIdentifier)arg1 ;
-(UIEdgeInsets)padding;
-(NSDictionary *)titleTextAttributes;
-(NSDictionary *)fallbackTitleTextAttributes;
-(NSDictionary *)subtitleTextAttributes;
-(double)baselineDistance;
@end

