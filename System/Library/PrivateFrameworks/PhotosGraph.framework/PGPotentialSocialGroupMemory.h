/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:19:32 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosGraph/PGPotentialMemory.h>

@class NSMutableSet, PGGraphSocialGroupNode, NSArray, NSSet;

@interface PGPotentialSocialGroupMemory : PGPotentialMemory {

	NSMutableSet* _mutableMomentNodes;
	PGGraphSocialGroupNode* _socialGroupNode;
	long long _year;
	NSArray* _facedAssetLocalIdentifiers;
	NSSet* _peopleUUIDs;

}

@property (readonly) PGGraphSocialGroupNode * socialGroupNode;              //@synthesize socialGroupNode=_socialGroupNode - In the implementation block
@property (readonly) long long year;                                        //@synthesize year=_year - In the implementation block
@property (retain) NSArray * facedAssetLocalIdentifiers;                    //@synthesize facedAssetLocalIdentifiers=_facedAssetLocalIdentifiers - In the implementation block
@property (retain) NSSet * peopleUUIDs;                                     //@synthesize peopleUUIDs=_peopleUUIDs - In the implementation block
-(long long)year;
-(NSSet *)peopleUUIDs;
-(void)addMomentNode:(id)arg1 ;
-(NSArray *)facedAssetLocalIdentifiers;
-(void)setFacedAssetLocalIdentifiers:(NSArray *)arg1 ;
-(PGGraphSocialGroupNode *)socialGroupNode;
-(id)initWithSocialGroupNode:(id)arg1 year:(long long)arg2 ;
-(void)setPeopleUUIDs:(NSSet *)arg1 ;
@end

