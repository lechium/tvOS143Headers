/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:09:10 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreData/NSPersistentStoreAsynchronousResult.h>

@class NSAsynchronousFetchRequest, NSArray;

@interface NSAsynchronousFetchResult : NSPersistentStoreAsynchronousResult {

	NSAsynchronousFetchRequest* _fetchRequest;
	NSArray* _finalResult;
	id _intermediateResultCallback;

}

@property (retain) NSArray * finalResult;                                    //@synthesize finalResult=_finalResult - In the implementation block
@property (copy) id intermediateResultCallback;                              //@synthesize intermediateResultCallback=_intermediateResultCallback - In the implementation block
@property (readonly) NSAsynchronousFetchRequest * fetchRequest;              //@synthesize fetchRequest=_fetchRequest - In the implementation block
-(void)dealloc;
-(NSAsynchronousFetchRequest *)fetchRequest;
-(void)setOperationError:(id)arg1 ;
-(id)initForFetchRequest:(id)arg1 withContext:(id)arg2 andProgress:(id)arg3 completetionBlock:(/*^block*/id)arg4 ;
-(NSArray *)finalResult;
-(void)setFinalResult:(NSArray *)arg1 ;
-(id)intermediateResultCallback;
-(void)setIntermediateResultCallback:(id)arg1 ;
@end

