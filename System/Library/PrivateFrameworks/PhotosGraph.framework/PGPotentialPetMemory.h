/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:19:30 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosGraph/PGPotentialMemory.h>

@class NSMutableSet, NSArray, PGGraphPersonNode;

@interface PGPotentialPetMemory : PGPotentialMemory {

	NSMutableSet* _mutableMomentNodes;
	NSArray* _petAssetLocalIdentifiers;
	PGGraphPersonNode* _ownerPersonNode;
	long long _year;

}

@property (retain) NSArray * petAssetLocalIdentifiers;                 //@synthesize petAssetLocalIdentifiers=_petAssetLocalIdentifiers - In the implementation block
@property (readonly) PGGraphPersonNode * ownerPersonNode;              //@synthesize ownerPersonNode=_ownerPersonNode - In the implementation block
@property (readonly) long long year;                                   //@synthesize year=_year - In the implementation block
-(long long)year;
-(void)addMomentNode:(id)arg1 ;
-(id)initWithOwner:(id)arg1 year:(long long)arg2 ;
-(NSArray *)petAssetLocalIdentifiers;
-(void)setPetAssetLocalIdentifiers:(NSArray *)arg1 ;
-(PGGraphPersonNode *)ownerPersonNode;
@end
