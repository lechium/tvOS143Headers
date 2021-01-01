/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:13:41 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol PXGDisplayAssetSource <PXGLayoutContentSource>
@required
-(unsigned long long)supportedDisplayAssetPresentationStylesInLayout:(id)arg1;
-(unsigned long long)desiredPlaceholderStyleInLayout:(id)arg1;
-(CGSize*)minSpriteSizeForPresentationStyle:(unsigned long long)arg1;
-(id)displayAssetFetchResultForSpritesInRange:(PXGSpriteIndexRange)arg1 inLayout:(id)arg2;
-(id)displayAssetRequestObserverForSpritesInRange:(PXGSpriteIndexRange)arg1 inLayout:(id)arg2;

@end
