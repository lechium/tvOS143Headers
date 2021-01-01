/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:06:48 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/Security.framework/Security
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSArray;

@interface OTBottleIDs : NSObject {

	NSArray* _preferredBottleIDs;
	NSArray* _partialRecoveryBottleIDs;

}

@property (retain) NSArray * preferredBottleIDs;                    //@synthesize preferredBottleIDs=_preferredBottleIDs - In the implementation block
@property (retain) NSArray * partialRecoveryBottleIDs;              //@synthesize partialRecoveryBottleIDs=_partialRecoveryBottleIDs - In the implementation block
-(NSArray *)preferredBottleIDs;
-(void)setPreferredBottleIDs:(NSArray *)arg1 ;
-(NSArray *)partialRecoveryBottleIDs;
-(void)setPartialRecoveryBottleIDs:(NSArray *)arg1 ;
@end

