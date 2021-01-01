/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:21:54 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/WiFiPolicy.framework/WiFiPolicy
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <WiFiPolicy/WiFiPolicy-Structs.h>
#import <WiFiPolicy/WFLoggerBase.h>

@protocol OS_dispatch_source;
@class NSObject, NSNumber;

@interface WFLoggerFile : WFLoggerBase {

	NSObject*<OS_dispatch_source> _loggingTimer;
	unsigned char _loggingTimerStarted;
	CFRunLoopRef _runLoopRef;
	CFStringRef _runLoopMode;
	unsigned char _classC;
	NSNumber* _logLifespanInDays;
	unsigned long long _privacy;
	unsigned long long _level;
	CFStringRef _logFilePath;
	NSObject*<OS_dispatch_source> _eventSource;
	unsigned char _isFileLoggingEnabled;
	_sFILE* _filePtr;
	CFDateRef _fileCreationDate;
	CFDateFormatterRef _dateFormatter;
	CFStringRef _presetFilePath;
	CFStringRef _directoryPath;
	CFStringRef _fileNamePrefix;
	unsigned long long _maxFileSizeInBytes;
	unsigned long long _timerInterval;
	unsigned long long _fileAgeOutInterval;

}

@property (getter=getLogFilePath,readonly) const CFStringRef logFilePath; 
@property (getter=getLogDirPath,readonly) const CFStringRef logDirPath; 
@property (getter=getLogFileNamePrefix,readonly) const CFStringRef logFileNamePrefix; 
-(void)dealloc;
-(void)schedule:(unsigned char)arg1 ;
-(void)WFLog:(unsigned long long)arg1 privacy:(unsigned long long)arg2 message:(const char*)arg3 valist:(char*)arg4 ;
-(void)WFLog:(unsigned long long)arg1 privacy:(unsigned long long)arg2 cfStrMsg:(CFStringRef)arg3 ;
-(id)getLogLifespanInDays;
-(void)setLogLifespanInDays:(id)arg1 ;
-(unsigned long long)getLogPrivacy;
-(void)setLogPrivacy:(unsigned long long)arg1 ;
-(unsigned long long)getLogLevelEnable;
-(void)setLogLevelEnable:(unsigned long long)arg1 ;
-(unsigned long long)getLogLevelPersist;
-(void)setLogLevelPersist:(unsigned long long)arg1 ;
-(unsigned long long)getMaxFileSizeInMB;
-(void)stopWatchingLogFile;
-(const CFStringRef)getLogFilePath;
-(id)initWithFilePath:(id)arg1 filePath:(CFStringRef)arg2 runLoopRef:(CFRunLoopRef)arg3 runLoopMode:(CFStringRef)arg4 classC:(unsigned char)arg5 dateFormatter:(CFDateFormatterRef)arg6 maxFileSizeInMB:(unsigned long long)arg7 logLifespanInDays:(unsigned long long)arg8 dispatchQueue:(id)arg9 ;
-(const CFStringRef)getLogDirPath;
-(const CFStringRef)getLogFileNamePrefix;
-(id)initWithDirectoryPath:(id)arg1 dirPath:(CFStringRef)arg2 fileNamePrefix:(CFStringRef)arg3 runLoopRef:(CFRunLoopRef)arg4 runLoopMode:(CFStringRef)arg5 classC:(unsigned char)arg6 dateFormatter:(CFDateFormatterRef)arg7 maxFileSizeInMB:(unsigned long long)arg8 logLifespanInDays:(unsigned long long)arg9 dispatchQueue:(id)arg10 ;
-(unsigned char)checkLogFileUpdate:(CFStringRef)arg1 ;
-(CFStringRef)changeLogFile:(unsigned char)arg1 ;
-(void)writeToFile:(unsigned long long)arg1 cfStrMsg:(CFStringRef)arg2 ;
-(void)init:(id)arg1 runLoopRef:(CFRunLoopRef)arg2 runLoopMode:(CFStringRef)arg3 classC:(unsigned char)arg4 dateFormatter:(CFDateFormatterRef)arg5 maxFileSizeInMB:(unsigned long long)arg6 logLifespanInDays:(unsigned long long)arg7 ;
-(CFStringRef)createDateString;
-(unsigned char)doesLogFileExist:(CFStringRef)arg1 ;
-(CFStringRef)generateLogFileName;
-(void)rotateLogFile:(CFStringRef)arg1 ;
-(void)createLogFile:(CFStringRef)arg1 fileClassC:(unsigned char)arg2 ;
-(void)removeLogFilesFromDir:(const char*)arg1 ;
-(void)removeLogFile:(const char*)arg1 maxAge:(double)arg2 ;
-(void)startWatchingLogFile;
-(void)cleanStaleLogs;
-(id)mapLogLevelEnum:(unsigned long long)arg1 ;
-(void)setMaxFileSizeInMB:(unsigned long long)arg1 ;
@end

