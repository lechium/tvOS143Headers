/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:14:46 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/LoggingSupport.framework/LoggingSupport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class _OSLogCollectionReference;

@interface _OSLogVersioning : NSObject {

	_OSLogCollectionReference* _lcr;
	BOOL _closeOnRelease;
	BOOL _hasEndTimeRef;
	long long _state;
	long long _version;

}

@property (nonatomic,readonly) long long state;                 //@synthesize state=_state - In the implementation block
@property (nonatomic,readonly) BOOL hasEndTimeRef;              //@synthesize hasEndTimeRef=_hasEndTimeRef - In the implementation block
@property (nonatomic,readonly) long long version;               //@synthesize version=_version - In the implementation block
-(void)dealloc;
-(long long)state;
-(long long)version;
-(id)initWithURL:(id)arg1 error:(id*)arg2 ;
-(BOOL)performDestructiveUpdates:(id*)arg1 ;
-(id)initWithCollection:(id)arg1 error:(id*)arg2 ;
-(id)initWithCollection:(id)arg1 closeOnRelease:(BOOL)arg2 error:(id*)arg3 ;
-(BOOL)checkTimesyncDB:(BOOL*)arg1 error:(id*)arg2 ;
-(BOOL)repairTimesyncDB:(id*)arg1 ;
-(BOOL)hasEndTimeRef;
@end

