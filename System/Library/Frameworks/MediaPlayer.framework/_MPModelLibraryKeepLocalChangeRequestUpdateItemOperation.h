/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:13:01 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MediaPlayer/MPAsyncOperation.h>

@class MPMediaItem;

@interface _MPModelLibraryKeepLocalChangeRequestUpdateItemOperation : MPAsyncOperation {

	MPMediaItem* _mediaItem;
	long long _keepLocal;

}

@property (nonatomic,retain) MPMediaItem * mediaItem;              //@synthesize mediaItem=_mediaItem - In the implementation block
@property (assign,nonatomic) long long keepLocal;                  //@synthesize keepLocal=_keepLocal - In the implementation block
-(void)execute;
-(MPMediaItem *)mediaItem;
-(void)setMediaItem:(MPMediaItem *)arg1 ;
-(long long)keepLocal;
-(void)setKeepLocal:(long long)arg1 ;
@end

