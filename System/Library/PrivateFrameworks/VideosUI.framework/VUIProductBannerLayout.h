/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:21:43 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TVMLKit/TVViewLayout.h>

@class TVImageLayout, VUITextLayout, VUIMediaTagsViewLayout;

@interface VUIProductBannerLayout : TVViewLayout {

	long long _sizeClass;
	unsigned long long _contentType;
	TVImageLayout* _logoImageLayout;
	VUITextLayout* _logoTextLayout;
	TVImageLayout* _decorationImageLayout;
	VUITextLayout* _subTextLayout;
	VUITextLayout* _episodeInfoTextLayout;
	VUITextLayout* _descriptionTextLayout;
	VUITextLayout* _descriptionTitleTextLayout;
	VUIMediaTagsViewLayout* _tagsLayout;
	VUITextLayout* _promoTextLayout;
	TVImageLayout* _coverArtImageLayout;
	double _maxCoverArtImageHeight;
	VUITextLayout* _disclaimerTextLayout;
	VUITextLayout* _availabilityTextLayout;
	TVImageLayout* _availabilityImageLayout;

}

@property (nonatomic,retain) TVImageLayout * logoImageLayout;                           //@synthesize logoImageLayout=_logoImageLayout - In the implementation block
@property (nonatomic,retain) VUITextLayout * logoTextLayout;                            //@synthesize logoTextLayout=_logoTextLayout - In the implementation block
@property (nonatomic,retain) TVImageLayout * coverArtImageLayout;                       //@synthesize coverArtImageLayout=_coverArtImageLayout - In the implementation block
@property (nonatomic,readonly) unsigned long long contentType; 
@property (nonatomic,readonly) TVImageLayout * decorationImageLayout;                   //@synthesize decorationImageLayout=_decorationImageLayout - In the implementation block
@property (nonatomic,readonly) VUITextLayout * subTextLayout;                           //@synthesize subTextLayout=_subTextLayout - In the implementation block
@property (nonatomic,readonly) VUITextLayout * episodeInfoTextLayout;                   //@synthesize episodeInfoTextLayout=_episodeInfoTextLayout - In the implementation block
@property (nonatomic,readonly) VUITextLayout * descriptionTextLayout;                   //@synthesize descriptionTextLayout=_descriptionTextLayout - In the implementation block
@property (nonatomic,readonly) VUITextLayout * descriptionTitleTextLayout;              //@synthesize descriptionTitleTextLayout=_descriptionTitleTextLayout - In the implementation block
@property (nonatomic,readonly) VUIMediaTagsViewLayout * tagsLayout;                     //@synthesize tagsLayout=_tagsLayout - In the implementation block
@property (nonatomic,readonly) VUITextLayout * promoTextLayout;                         //@synthesize promoTextLayout=_promoTextLayout - In the implementation block
@property (nonatomic,readonly) double maxCoverArtImageHeight;                           //@synthesize maxCoverArtImageHeight=_maxCoverArtImageHeight - In the implementation block
@property (nonatomic,readonly) VUITextLayout * disclaimerTextLayout;                    //@synthesize disclaimerTextLayout=_disclaimerTextLayout - In the implementation block
@property (nonatomic,readonly) VUITextLayout * availabilityTextLayout;                  //@synthesize availabilityTextLayout=_availabilityTextLayout - In the implementation block
@property (nonatomic,readonly) TVImageLayout * availabilityImageLayout;                 //@synthesize availabilityImageLayout=_availabilityImageLayout - In the implementation block
+(id)layoutWithLayout:(id)arg1 element:(id)arg2 sizeClass:(long long)arg3 contentType:(unsigned long long)arg4 ;
+(id)_coverArtImageShadow;
-(unsigned long long)contentType;
-(VUITextLayout *)descriptionTextLayout;
-(VUITextLayout *)disclaimerTextLayout;
-(TVImageLayout *)logoImageLayout;
-(VUIMediaTagsViewLayout *)tagsLayout;
-(VUITextLayout *)availabilityTextLayout;
-(TVImageLayout *)availabilityImageLayout;
-(void)setLogoImageLayout:(TVImageLayout *)arg1 ;
-(void)updateWithSizeClass:(long long)arg1 contentSizeCategoryIsAccessibility:(BOOL)arg2 ;
-(TVImageLayout *)decorationImageLayout;
-(TVImageLayout *)coverArtImageLayout;
-(VUITextLayout *)descriptionTitleTextLayout;
-(VUITextLayout *)promoTextLayout;
-(VUITextLayout *)logoTextLayout;
-(VUITextLayout *)subTextLayout;
-(VUITextLayout *)episodeInfoTextLayout;
-(id)initWithSizeClass:(long long)arg1 contentType:(unsigned long long)arg2 ;
-(void)_createLayoutsWithSizeClass:(long long)arg1 contentType:(unsigned long long)arg2 ;
-(void)setLogoTextLayout:(VUITextLayout *)arg1 ;
-(void)setCoverArtImageLayout:(TVImageLayout *)arg1 ;
-(double)maxCoverArtImageHeight;
@end

