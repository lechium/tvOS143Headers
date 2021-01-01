/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:21:41 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSOrderedSet;

@interface VUIMediaItemEntityTypesFetchResponse : NSObject {

	BOOL _localMediaItemsAvailable;
	NSOrderedSet* _mediaItemEntityTypes;

}

@property (nonatomic,copy) NSOrderedSet * mediaItemEntityTypes;                                             //@synthesize mediaItemEntityTypes=_mediaItemEntityTypes - In the implementation block
@property (assign,getter=areLocalMediaItemsAvailable,nonatomic) BOOL localMediaItemsAvailable;              //@synthesize localMediaItemsAvailable=_localMediaItemsAvailable - In the implementation block
-(id)description;
-(id)init;
-(BOOL)_updateWithResponse:(id)arg1 changes:(id)arg2 replaceContentsOnNilChanges:(BOOL)arg3 ;
-(void)setMediaItemEntityTypes:(NSOrderedSet *)arg1 ;
-(void)setLocalMediaItemsAvailable:(BOOL)arg1 ;
-(NSOrderedSet *)mediaItemEntityTypes;
-(BOOL)areLocalMediaItemsAvailable;
@end
