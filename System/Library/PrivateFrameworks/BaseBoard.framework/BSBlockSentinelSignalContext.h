/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:09:04 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/BSBlockSentinelSignalContext.h>

@protocol BSBlockSentinelSignalContext <NSObject>
@property (getter=isComplete,nonatomic,readonly) BOOL complete; 
@property (getter=isFailed,nonatomic,readonly) BOOL failed; 
@property (nonatomic,readonly) id context; 
@required
-(id)context;
-(BOOL)isComplete;
-(BOOL)isFailed;

@end


@class NSString;

@interface BSBlockSentinelSignalContext : NSObject <BSBlockSentinelSignalContext> {

	BOOL _complete;
	BOOL _failed;
	id _context;

}

@property (getter=isComplete,nonatomic,readonly) BOOL complete;              //@synthesize complete=_complete - In the implementation block
@property (getter=isFailed,nonatomic,readonly) BOOL failed;                  //@synthesize failed=_failed - In the implementation block
@property (nonatomic,readonly) id context;                                   //@synthesize context=_context - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)context;
-(BOOL)isComplete;
-(BOOL)isFailed;
@end

