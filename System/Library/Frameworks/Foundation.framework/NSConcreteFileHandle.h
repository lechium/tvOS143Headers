/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:06:41 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSFileHandle.h>

@protocol OS_dispatch_source, OS_dispatch_data, OS_dispatch_queue, OS_dispatch_io;
@class NSObject;

@interface NSConcreteFileHandle : NSFileHandle {

	os_unfair_lock_s _lock;
	Ai _error;
	Ai _resultSocket;
	NSObject*<OS_dispatch_source> _dsrc;
	NSObject*<OS_dispatch_data> _resultData;
	NSObject*<OS_dispatch_queue> _fhQueue;
	NSObject*<OS_dispatch_io> _readChannel;
	/*^block*/id _readabilityHandler;
	/*^block*/id _writeabilityHandler;
	NSObject*<OS_dispatch_source> _readMonitoringSource;
	NSObject*<OS_dispatch_source> _writeMonitoringSource;
	NSObject*<OS_dispatch_queue> _monitoringQueue;
	int _fd;
	AS _flags;

}
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)port;
-(void)setPort:(id)arg1 ;
-(void)closeFile;
-(int)fileDescriptor;
-(BOOL)writeData:(id)arg1 error:(out id*)arg2 ;
-(void)writeData:(id)arg1 ;
-(id)initWithFileDescriptor:(int)arg1 closeOnDealloc:(BOOL)arg2 ;
-(id)initWithPath:(id)arg1 flags:(long long)arg2 createMode:(long long)arg3 error:(id*)arg4 ;
-(id)initWithPath:(id)arg1 flags:(long long)arg2 createMode:(long long)arg3 ;
-(id)initWithURL:(id)arg1 flags:(long long)arg2 createMode:(long long)arg3 error:(id*)arg4 ;
-(id)readDataToEndOfFile;
-(id)readDataOfLength:(unsigned long long)arg1 ;
-(unsigned long long)offsetInFile;
-(unsigned long long)seekToEndOfFile;
-(void)seekToFileOffset:(unsigned long long)arg1 ;
-(void)truncateFileAtOffset:(unsigned long long)arg1 ;
-(void)synchronizeFile;
-(id)initWithFileDescriptor:(int)arg1 ;
-(id)availableData;
-(id)readDataToEndOfFileAndReturnError:(out id*)arg1 ;
-(id)readDataUpToLength:(unsigned long long)arg1 error:(out id*)arg2 ;
-(BOOL)getOffset:(out unsigned long long*)arg1 error:(out id*)arg2 ;
-(BOOL)seekToEndReturningOffset:(out unsigned long long*)arg1 error:(out id*)arg2 ;
-(BOOL)seekToOffset:(unsigned long long)arg1 error:(out id*)arg2 ;
-(BOOL)truncateAtOffset:(unsigned long long)arg1 error:(out id*)arg2 ;
-(BOOL)synchronizeAndReturnError:(out id*)arg1 ;
-(BOOL)closeAndReturnError:(out id*)arg1 ;
-(/*^block*/id)writeabilityHandler;
-(void)setWriteabilityHandler:(/*^block*/id)arg1 ;
-(/*^block*/id)readabilityHandler;
-(void)setReadabilityHandler:(/*^block*/id)arg1 ;
-(void)_closeOnDealloc;
-(void)_locked_clearHandler:(/*^block*/id*)arg1 forSource:(id*)arg2 ;
-(void)_cancelDispatchSources;
-(void)performActivity:(long long)arg1 modes:(id)arg2 ;
-(void)readInBackgroundAndNotifyForModes:(id)arg1 ;
-(void)readToEndOfFileInBackgroundAndNotifyForModes:(id)arg1 ;
-(void)acceptConnectionInBackgroundAndNotifyForModes:(id)arg1 ;
-(void)waitForDataInBackgroundAndNotifyForModes:(id)arg1 ;
-(id)_monitor:(int)arg1 ;
-(unsigned long long)readDataOfLength:(unsigned long long)arg1 buffer:(char*)arg2 ;
-(void)readInBackgroundAndNotify;
-(void)readToEndOfFileInBackgroundAndNotify;
-(void)acceptConnectionInBackgroundAndNotify;
-(void)waitForDataInBackgroundAndNotify;
@end

