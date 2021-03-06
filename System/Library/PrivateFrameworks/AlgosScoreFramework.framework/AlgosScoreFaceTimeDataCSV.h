/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:18:11 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/AlgosScoreFramework.framework/AlgosScoreFramework
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AlgosScoreFramework/AlgosScoreDataCSV.h>

@class NSDictionary;

@interface AlgosScoreFaceTimeDataCSV : AlgosScoreDataCSV {

	NSDictionary* _methods;

}

@property (nonatomic,retain) NSDictionary * methods;              //@synthesize methods=_methods - In the implementation block
+(id)facetimeDataCSV;
-(id)init;
-(NSDictionary *)methods;
-(int)transformer;
-(id)setUpMethods;
-(void)setMethods:(NSDictionary *)arg1 ;
-(BOOL)matchesMethod:(id)arg1 code:(long long)arg2 ;
-(BOOL)validMethod:(long long)arg1 ;
@end

