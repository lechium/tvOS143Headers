/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:16:10 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CloudKitDaemon/CKLStreamObserver.h>

@protocol OS_dispatch_queue;
@class NSPredicate, NSMutableDictionary, NSObject;

@interface CKLStreamTrafficObserver : CKLStreamObserver {

	NSPredicate* _logMessageFilter;
	/*^block*/id _requestParsedBlock;
	NSMutableDictionary* _requestDictionary;
	NSObject*<OS_dispatch_queue> _printQueue;

}

@property (retain) NSMutableDictionary * requestDictionary;              //@synthesize requestDictionary=_requestDictionary - In the implementation block
@property (retain) NSObject*<OS_dispatch_queue> printQueue;              //@synthesize printQueue=_printQueue - In the implementation block
@property (nonatomic,copy) NSPredicate * logMessageFilter;               //@synthesize logMessageFilter=_logMessageFilter - In the implementation block
@property (nonatomic,copy) id requestParsedBlock;                        //@synthesize requestParsedBlock=_requestParsedBlock - In the implementation block
-(void)finish;
-(NSMutableDictionary *)requestDictionary;
-(void)setRequestDictionary:(NSMutableDictionary *)arg1 ;
-(id)initWithLogTypes:(unsigned long long)arg1 ;
-(void)eventMatched:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)printQueue;
-(void)parseRequestArrayAndPrint:(id)arg1 ;
-(id)parserFromConfigurationMessage:(id)arg1 ;
-(id)requestParsedBlock;
-(NSPredicate *)logMessageFilter;
-(void)setLogMessageFilter:(NSPredicate *)arg1 ;
-(void)setRequestParsedBlock:(id)arg1 ;
-(void)setPrintQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
@end

