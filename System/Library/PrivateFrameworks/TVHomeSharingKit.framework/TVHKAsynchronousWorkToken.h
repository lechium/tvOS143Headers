/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:20:24 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/TVHomeSharingKit.framework/TVHomeSharingKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSOperation;

@interface TVHKAsynchronousWorkToken : NSObject {

	NSOperation* _operation;

}

@property (nonatomic,retain) NSOperation * operation;              //@synthesize operation=_operation - In the implementation block
+(id)new;
-(id)init;
-(void)cancel;
-(NSOperation *)operation;
-(void)setOperation:(NSOperation *)arg1 ;
-(id)initWithOperation:(id)arg1 ;
@end
