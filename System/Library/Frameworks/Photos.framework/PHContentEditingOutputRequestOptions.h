/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:12:09 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/Photos.framework/Photos
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface PHContentEditingOutputRequestOptions : NSObject {

	BOOL _asyncAdjustment;
	BOOL _onlyChangingOriginalChoice;
	BOOL _preferHEICForRenderedImages;
	long long _playbackStyle;

}

@property (assign,getter=isAsyncAdjustment,nonatomic) BOOL asyncAdjustment;                                    //@synthesize asyncAdjustment=_asyncAdjustment - In the implementation block
@property (assign,getter=isOnlyChangingOriginalChoice,nonatomic) BOOL onlyChangingOriginalChoice;              //@synthesize onlyChangingOriginalChoice=_onlyChangingOriginalChoice - In the implementation block
@property (assign,nonatomic) long long playbackStyle;                                                          //@synthesize playbackStyle=_playbackStyle - In the implementation block
@property (assign,nonatomic) BOOL preferHEICForRenderedImages;                                                 //@synthesize preferHEICForRenderedImages=_preferHEICForRenderedImages - In the implementation block
-(id)description;
-(long long)playbackStyle;
-(void)setPlaybackStyle:(long long)arg1 ;
-(BOOL)isOnlyChangingOriginalChoice;
-(BOOL)isAsyncAdjustment;
-(BOOL)preferHEICForRenderedImages;
-(void)setOnlyChangingOriginalChoice:(BOOL)arg1 ;
-(void)setAsyncAdjustment:(BOOL)arg1 ;
-(void)setPreferHEICForRenderedImages:(BOOL)arg1 ;
@end
