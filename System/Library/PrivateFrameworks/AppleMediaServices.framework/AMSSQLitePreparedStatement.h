/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:18:20 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString;

@interface AMSSQLitePreparedStatement : NSObject {

	const void* _connectionPointer;
	NSString* _SQL;

}

@property (nonatomic,readonly) const void* connectionPointer;              //@synthesize connectionPointer=_connectionPointer - In the implementation block
@property (setter=QL,nonatomic,copy,readonly) NSString * SQL;              //@synthesize SQL=_SQL - In the implementation block
-(NSString *)SQL;
-(id)initWithConnection:(const void*)arg1 SQL:(id)arg2 ;
-(const void*)connectionPointer;
@end

