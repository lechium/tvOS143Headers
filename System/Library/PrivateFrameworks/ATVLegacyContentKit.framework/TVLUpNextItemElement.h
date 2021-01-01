/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:17:46 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/ATVLegacyContentKit.framework/ATVLegacyContentKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ATVLegacyContentKit/TVLElement.h>

@class TVLVideoAssetElement;

@interface TVLUpNextItemElement : TVLElement {

	TVLVideoAssetElement* _videoAsset;

}

@property (nonatomic,retain) TVLVideoAssetElement * videoAsset;              //@synthesize videoAsset=_videoAsset - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(void)setVideoAsset:(TVLVideoAssetElement *)arg1 ;
-(TVLVideoAssetElement *)videoAsset;
-(id)initWithXMLElement:(id)arg1 parentFeedElement:(id)arg2 ;
@end

