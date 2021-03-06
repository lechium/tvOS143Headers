/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:11:08 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol MRNowPlayingControllerDelegate <NSObject>
@optional
-(void)controller:(id)arg1 didLoadResponse:(id)arg2;
-(void)controller:(id)arg1 playbackStateDidChangeFrom:(unsigned)arg2 to:(unsigned)arg3;
-(void)controller:(id)arg1 playbackQueueDidChangeFrom:(id)arg2 to:(id)arg3;
-(void)controller:(id)arg1 contentItemsDidUpdate:(id)arg2;
-(void)controller:(id)arg1 didLoadArtworkForContentItems:(id)arg2;
-(void)controller:(id)arg1 supportedCommandsDidChangeFrom:(id)arg2 to:(id)arg3;
-(void)controller:(id)arg1 didUpdateResponse:(id)arg2;
-(void)controllerWillReloadForInvalidation:(id)arg1;
-(void)controller:(id)arg1 didFailWithError:(id)arg2;

@end

