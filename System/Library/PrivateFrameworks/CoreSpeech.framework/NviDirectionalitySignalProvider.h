/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:16:15 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NviSignalProvider.h>

@class NSString;

@interface NviDirectionalitySignalProvider : NSObject <NviSignalProvider>

@property (nonatomic,readonly) unsigned long long sigType; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)reset;
-(void)addDelegate:(id)arg1 ;
-(void)removeDelegate:(id)arg1 ;
-(id)initWithDataSource:(id)arg1 assetsProvider:(id)arg2 ;
-(void)startWithNviContext:(id)arg1 didStartHandler:(/*^block*/id)arg2 ;
-(void)stopWithDidStopHandler:(/*^block*/id)arg1 ;
-(unsigned long long)sigType;
@end

