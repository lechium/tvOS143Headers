/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:12:57 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MediaPlayer/MPMusicPlayerControllerQueue.h>

@class NSMutableDictionary, NSMutableArray, MPMusicPlayerControllerApplicationQueueModifications;

@interface MPMusicPlayerControllerMutableQueue : MPMusicPlayerControllerQueue {

	NSMutableDictionary* _insertedDescriptors;
	NSMutableArray* _removedItems;

}

@property (nonatomic,retain) NSMutableDictionary * insertedDescriptors;                                           //@synthesize insertedDescriptors=_insertedDescriptors - In the implementation block
@property (nonatomic,retain) NSMutableArray * removedItems;                                                       //@synthesize removedItems=_removedItems - In the implementation block
@property (nonatomic,readonly) MPMusicPlayerControllerApplicationQueueModifications * modifications; 
-(void)removeItem:(id)arg1 ;
-(MPMusicPlayerControllerApplicationQueueModifications *)modifications;
-(id)initWithController:(id)arg1 ;
-(void)insertQueueDescriptor:(id)arg1 afterItem:(id)arg2 ;
-(NSMutableDictionary *)insertedDescriptors;
-(void)setInsertedDescriptors:(NSMutableDictionary *)arg1 ;
-(NSMutableArray *)removedItems;
-(void)setRemovedItems:(NSMutableArray *)arg1 ;
@end

