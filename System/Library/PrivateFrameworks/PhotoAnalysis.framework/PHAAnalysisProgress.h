/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:16:50 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSDictionary;

@interface PHAAnalysisProgress : NSObject {

	NSDictionary* _countDictionariesByWorkerType;
	NSDictionary* _countOfDeletionsByWorkerType;
	NSDictionary* _totalProgressCountsByWorkerType;

}
+(void)requestCurrentProgressWithLibrary:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)description;
-(id)init;
-(id)statusAsDictionary;
-(float)_progressFromProcessedCount:(long long)arg1 outOfPossibleCount:(long long)arg2 ;
-(id)initWithCounts:(id)arg1 totalProgressCounts:(id)arg2 countOfDeletionsByWorkerType:(id)arg3 ;
-(float)percentAnalyzedForWorkerType:(short)arg1 ;
-(float)localPercentAnalyzedForWorkerType:(short)arg1 ;
-(unsigned long long)countOfDeletionsForWorkerType:(short)arg1 ;
@end

