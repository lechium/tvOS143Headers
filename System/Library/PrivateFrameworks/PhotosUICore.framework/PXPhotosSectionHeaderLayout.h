/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:13:43 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXGLayout.h>
#import <libobjc.A.dylib/PXGStringSource.h>
#import <libobjc.A.dylib/PXGSolidColorSource.h>
#import <libobjc.A.dylib/PXGNamedImageSource.h>
#import <libobjc.A.dylib/PXPhotosSectionedLayoutHeader.h>

@class PXPhotosLayoutSpec, PXSelectionSnapshot, NSIndexSet, NSString, PXAssetCollectionReference, UIColor, NSDictionary;

@interface PXPhotosSectionHeaderLayout : PXGLayout <PXGStringSource, PXGSolidColorSource, PXGNamedImageSource, PXPhotosSectionedLayoutHeader> {

	struct {
		unsigned long long needsUpdate;
		unsigned long long updated;
		BOOL isPerformingUpdate;
	}  _updateFlags;
	unsigned short _dividerVersion;
	unsigned short _titleVersion;
	unsigned short _subtitleVersion;
	NSIndexSet* _axSpriteIndexes;
	BOOL isInSelectMode;
	BOOL _isFirstSectionHeader;
	PXPhotosLayoutSpec* _spec;
	PXSelectionSnapshot* selectionSnapshot;
	NSString* _axSpriteText;
	NSString* _title;
	NSString* _subtitle;
	PXAssetCollectionReference* _assetCollectionReference;
	UIColor* _dividerColor;
	NSDictionary* _titleAttributes;
	NSDictionary* _subtitleAttributes;
	double _relativeOffsetAlpha;
	CGSize _titleSize;
	CGSize _subtitleSize;

}

@property (nonatomic,readonly) UIColor * dividerColor;                                           //@synthesize dividerColor=_dividerColor - In the implementation block
@property (nonatomic,copy) NSDictionary * titleAttributes;                                       //@synthesize titleAttributes=_titleAttributes - In the implementation block
@property (nonatomic,readonly) CGSize titleSize;                                                 //@synthesize titleSize=_titleSize - In the implementation block
@property (nonatomic,copy) NSDictionary * subtitleAttributes;                                    //@synthesize subtitleAttributes=_subtitleAttributes - In the implementation block
@property (nonatomic,readonly) CGSize subtitleSize;                                              //@synthesize subtitleSize=_subtitleSize - In the implementation block
@property (nonatomic,readonly) BOOL allowsInteraction; 
@property (nonatomic,readonly) double relativeOffsetAlpha;                                       //@synthesize relativeOffsetAlpha=_relativeOffsetAlpha - In the implementation block
@property (nonatomic,readonly) CGRect axSpriteFrame; 
@property (nonatomic,readonly) NSString * axSpriteText;                                          //@synthesize axSpriteText=_axSpriteText - In the implementation block
@property (nonatomic,copy) NSString * title;                                                     //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * subtitle;                                                  //@synthesize subtitle=_subtitle - In the implementation block
@property (assign,nonatomic) BOOL isFirstSectionHeader;                                          //@synthesize isFirstSectionHeader=_isFirstSectionHeader - In the implementation block
@property (nonatomic,retain) PXAssetCollectionReference * assetCollectionReference;              //@synthesize assetCollectionReference=_assetCollectionReference - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) PXPhotosLayoutSpec * spec;                                          //@synthesize spec=_spec - In the implementation block
@property (assign,nonatomic) BOOL isInSelectMode; 
@property (nonatomic,retain) PXSelectionSnapshot * selectionSnapshot; 
-(id)init;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(void)setSubtitle:(NSString *)arg1 ;
-(NSString *)subtitle;
-(void)update;
-(CGSize)titleSize;
-(void)_updateAttributes;
-(PXPhotosLayoutSpec *)spec;
-(void)contentSizeDidChange;
-(void)safeAreaInsetsDidChange;
-(void)_updateContent;
-(void)setSpec:(PXPhotosLayoutSpec *)arg1 ;
-(id)imageConfigurationAtIndex:(unsigned)arg1 inLayout:(id)arg2 ;
-(void)_updateSpritesAlpha;
-(void)visibleRectDidChange;
-(void)referenceSizeDidChange;
-(void)screenScaleDidChange;
-(void)setAssetCollectionReference:(PXAssetCollectionReference *)arg1 ;
-(id)hitTestResultForSpriteIndex:(unsigned)arg1 ;
-(id)axSpriteIndexes;
-(id)axSpriteIndexesInRect:(CGRect)arg1 ;
-(PXAssetCollectionReference *)assetCollectionReference;
-(void)setSelectionSnapshot:(PXSelectionSnapshot *)arg1 ;
-(PXSelectionSnapshot *)selectionSnapshot;
-(void)_invalidateContent;
-(BOOL)isInSelectMode;
-(void)setIsInSelectMode:(BOOL)arg1 ;
-(id)colorAtIndex:(unsigned)arg1 inLayout:(id)arg2 ;
-(id)stringAtIndex:(unsigned)arg1 inLayout:(id)arg2 ;
-(id)stringAttributesAtIndex:(unsigned)arg1 inLayout:(id)arg2 ;
-(long long)verticalAlignmentForStringAtIndex:(unsigned)arg1 inLayout:(id)arg2 ;
-(id)attributedStringForSpriteAtIndex:(unsigned)arg1 inLayout:(id)arg2 ;
-(id)initWithSpec:(id)arg1 ;
-(BOOL)allowsInteraction;
-(void)setDividerColor:(UIColor *)arg1 ;
-(void)setTitleAttributes:(NSDictionary *)arg1 ;
-(void)setSubtitleAttributes:(NSDictionary *)arg1 ;
-(CGSize)subtitleSize;
-(void)setRelativeOffsetAlpha:(double)arg1 ;
-(void)_invalidateAttributes;
-(void)_invalidateRelativeOffsetAlpha;
-(void)_updateRelativeOffsetAlpha;
-(void)_invalidateSpritesAlpha;
-(void)_invalidateDividerMediaVersion;
-(void)_invalidateTitleMediaVersion;
-(void)_invalidateSubtitleMediaVersion;
-(id)axVisibleSpriteIndexes;
-(id)axContentInfoAtSpriteIndex:(unsigned)arg1 ;
-(CGRect)axSpriteFrame;
-(NSString *)axSpriteText;
-(BOOL)isFirstSectionHeader;
-(void)setIsFirstSectionHeader:(BOOL)arg1 ;
-(UIColor *)dividerColor;
-(NSDictionary *)titleAttributes;
-(NSDictionary *)subtitleAttributes;
-(double)relativeOffsetAlpha;
@end
