/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:13:45 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSMutableSet, NSMutableDictionary, NSSet;

@interface PXIDSAddressQuery : NSObject {

	unsigned long long _destinationsCount;
	NSMutableSet* _mutableRemainingDestinations;
	NSMutableDictionary* _mutableStashedResults;
	unsigned long long _resultsCount;
	/*^block*/id _resultHandler;

}

@property (nonatomic,copy,readonly) id resultHandler;                           //@synthesize resultHandler=_resultHandler - In the implementation block
@property (nonatomic,copy,readonly) NSSet * remainingDestinations; 
@property (nonatomic,readonly) BOOL isComplete; 
-(BOOL)isComplete;
-(id)resultHandler;
-(id)initWithDestinations:(id)arg1 resultHandler:(/*^block*/id)arg2 ;
-(void)stashDestination:(id)arg1 withResult:(BOOL)arg2 ;
-(id)popStashedResults;
-(NSSet *)remainingDestinations;
@end

