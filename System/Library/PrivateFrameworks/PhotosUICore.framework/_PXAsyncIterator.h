/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:14:00 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/PXAsyncIterator.h>

@class NSString;

@interface _PXAsyncIterator : NSObject <PXAsyncIterator> {

	unsigned long long _index;
	unsigned long long _count;
	/*^block*/id _handler;
	/*^block*/id _completion;

}

@property (nonatomic,copy,readonly) id handler;                       //@synthesize handler=_handler - In the implementation block
@property (nonatomic,copy) id completion;                             //@synthesize completion=_completion - In the implementation block
@property (nonatomic,readonly) unsigned long long index;              //@synthesize index=_index - In the implementation block
@property (nonatomic,readonly) unsigned long long count;              //@synthesize count=_count - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(unsigned long long)count;
-(id)completion;
-(void)stop;
-(unsigned long long)index;
-(void)next;
-(id)handler;
-(void)setCompletion:(id)arg1 ;
-(id)initWithCount:(unsigned long long)arg1 handler:(/*^block*/id)arg2 ;
-(void)_executeNextRun;
@end

