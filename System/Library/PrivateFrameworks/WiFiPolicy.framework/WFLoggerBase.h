/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:21:53 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/WiFiPolicy.framework/WiFiPolicy
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <WiFiPolicy/WiFiPolicy-Structs.h>
#import <libobjc.A.dylib/WFLogProtocol.h>

@protocol OS_dispatch_queue;
@class NSNumber, WFLogger, NSObject, NSString;

@interface WFLoggerBase : NSObject <WFLogProtocol> {

	WFLogger* _ctxt;
	unsigned char _internalInstall;
	NSObject*<OS_dispatch_queue> _dispatchQueue;

}

@property (readonly) unsigned char WFIsInternalInstall; 
@property (getter=getLogLifespanInDays,copy) NSNumber * logLifespanInDays; 
@property (getter=getLogPrivacy) unsigned long long logPrivacy; 
@property (getter=getLogLevelEnable) unsigned long long logLevelEnable; 
@property (getter=getLogLevelPersist) unsigned long long logLevelPersist; 
@property (getter=getMaxFileSizeInMB) unsigned long long maxSizeInKb; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dump;
-(void)WFLog:(unsigned long long)arg1 privacy:(unsigned long long)arg2 message:(const char*)arg3 valist:(char*)arg4 ;
-(void)WFLog:(unsigned long long)arg1 privacy:(unsigned long long)arg2 cfStrMsg:(CFStringRef)arg3 ;
-(id)getLogLifespanInDays;
-(void)setLogLifespanInDays:(NSNumber *)arg1 ;
-(unsigned long long)getLogPrivacy;
-(void)setLogPrivacy:(unsigned long long)arg1 ;
-(unsigned long long)getLogLevelEnable;
-(void)setLogLevelEnable:(unsigned long long)arg1 ;
-(unsigned long long)getLogLevelPersist;
-(void)setLogLevelPersist:(unsigned long long)arg1 ;
-(unsigned long long)getMaxFileSizeInMB;
-(void)setMaxSizeInKb:(unsigned long long)arg1 ;
-(unsigned char)WFIsInternalInstall;
-(void)stopWatchingLogFile;
@end

