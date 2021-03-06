/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:19:18 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/PeopleSuggester.framework/PeopleSuggester
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSArray;

@interface _PSKNNeighbor : NSObject {

	double _distance;
	NSArray* _nodeData;

}

@property (assign,nonatomic) double distance;                 //@synthesize distance=_distance - In the implementation block
@property (nonatomic,retain) NSArray * nodeData;              //@synthesize nodeData=_nodeData - In the implementation block
-(void)setDistance:(double)arg1 ;
-(double)distance;
-(id)initWithNodeData:(id)arg1 distance:(double)arg2 ;
-(NSArray *)nodeData;
-(void)setNodeData:(NSArray *)arg1 ;
@end

