/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:19:50 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/ScoreBoard.framework/ScoreBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ScoreBoard/ScoreBoard-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface SCRTaskHandler : NSObject <NSCopying> {

	/*^block*/id _syncBlock;
	/*^block*/id _asyncBlock;

}
+(id)synchronousHandlerWithBlock:(/*^block*/id)arg1 ;
+(id)asynchronousHandlerWithBlock:(/*^block*/id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)performWithContext:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)_initWithSyncBlock:(/*^block*/id)arg1 asyncBlock:(/*^block*/id)arg2 ;
-(/*^block*/id)_syncHandler;
-(/*^block*/id)_asyncHandler;
@end

