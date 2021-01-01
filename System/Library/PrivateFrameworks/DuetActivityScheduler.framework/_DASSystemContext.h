/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:14:26 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/DuetActivityScheduler.framework/DuetActivityScheduler
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol _CDLocalContext, OS_os_log;
@class NSObject;

@interface _DASSystemContext : NSObject {

	id<_CDLocalContext> _context;
	NSObject*<OS_os_log> _dasSystemContextLog;
	long long _networkPathStatus;
	long long _inexpensiveNetworkPathStatus;

}

@property (nonatomic,retain) id<_CDLocalContext> context;                           //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) NSObject*<OS_os_log> dasSystemContextLog;              //@synthesize dasSystemContextLog=_dasSystemContextLog - In the implementation block
@property (assign,nonatomic) long long networkPathStatus;                           //@synthesize networkPathStatus=_networkPathStatus - In the implementation block
@property (assign,nonatomic) long long inexpensiveNetworkPathStatus;                //@synthesize inexpensiveNetworkPathStatus=_inexpensiveNetworkPathStatus - In the implementation block
+(id)sharedInstance;
+(id)initWithContext:(id)arg1 ;
-(id)init;
-(id<_CDLocalContext>)context;
-(void)setContext:(id<_CDLocalContext>)arg1 ;
-(BOOL)allowsDiscretionaryWorkForTask:(id)arg1 withPriority:(unsigned long long)arg2 withParameters:(id)arg3 ;
-(BOOL)allowDiscretionaryWorkForBackgroundTask:(id)arg1 withParameters:(id)arg2 ;
-(BOOL)allowDiscretionaryWorkForUtilityTask:(id)arg1 withParameters:(id)arg2 ;
-(BOOL)isNetworkAvailable;
-(BOOL)isApplicationFocalForPushTask:(id)arg1 ;
-(NSObject*<OS_os_log>)dasSystemContextLog;
-(BOOL)isInexpensiveNetworkAvailable;
-(void)setDasSystemContextLog:(NSObject*<OS_os_log>)arg1 ;
-(long long)networkPathStatus;
-(void)setNetworkPathStatus:(long long)arg1 ;
-(long long)inexpensiveNetworkPathStatus;
-(void)setInexpensiveNetworkPathStatus:(long long)arg1 ;
@end

