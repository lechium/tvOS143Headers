/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:16:43 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIView.h>

@class AVSynchronizedLayer, AVPlayerItem;

@interface PMAVSynchronizedView : UIView

@property (nonatomic,retain) AVSynchronizedLayer * layer; 
@property (nonatomic,retain) AVPlayerItem * playerItem; 
+(Class)layerClass;
-(AVPlayerItem *)playerItem;
-(void)setPlayerItem:(AVPlayerItem *)arg1 ;
-(id)makeBackingLayer;
@end

