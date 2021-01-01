/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:19:28 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosGraph/PGTitleGenerator.h>

@class PGGraphLocationNode, NSDateInterval;

@interface PGPastSupersetMemoryTitleGenerator : PGTitleGenerator {

	PGGraphLocationNode* _supersetLocationNode;
	NSDateInterval* _supersetDateInterval;

}

@property (readonly) PGGraphLocationNode * supersetLocationNode;              //@synthesize supersetLocationNode=_supersetLocationNode - In the implementation block
@property (readonly) NSDateInterval * supersetDateInterval;                   //@synthesize supersetDateInterval=_supersetDateInterval - In the implementation block
-(id)_locationTitle;
-(void)_generateTitleAndSubtitleWithResult:(/*^block*/id)arg1 ;
-(id)initWithMomentNodes:(id)arg1 supersetLocationNode:(id)arg2 supersetDateInterval:(id)arg3 ;
-(id)_timeTitle;
-(PGGraphLocationNode *)supersetLocationNode;
-(NSDateInterval *)supersetDateInterval;
@end

