/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:14:47 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Symbolication/Symbolication-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface VMUBacktrace : NSObject <NSCopying> {

	int _flavor;
	SCD_Struct_VM16* _callstack;

}
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)dealloc;
-(void)setStartTime:(double)arg1 ;
-(unsigned)thread;
-(unsigned)backtraceLength;
-(unsigned long long)dispatchQueueSerialNumber;
-(unsigned long long*)backtrace;
-(void)setEndTime:(double)arg1 ;
-(unsigned long long*)stackFramePointers;
-(CSTypeRef)_symbolicator;
-(id)initWithSamplingContext:(sampling_context_tRef)arg1 thread:(unsigned)arg2 recordFramePointers:(BOOL)arg3 ;
-(void)fixupStackWithSamplingContext:(sampling_context_tRef)arg1 symbolicator:(CSTypeRef)arg2 ;
-(id)initWithTask:(unsigned)arg1 thread:(unsigned)arg2 is64Bit:(BOOL)arg3 ;
-(void)setLengthTime:(double)arg1 ;
-(void)setThreadState:(int)arg1 ;
-(int)threadState;
@end
