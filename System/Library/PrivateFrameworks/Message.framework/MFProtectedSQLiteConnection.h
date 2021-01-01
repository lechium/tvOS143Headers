/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:13:13 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Message/MFSQLiteConnection.h>

@class NSString;

@interface MFProtectedSQLiteConnection : MFSQLiteConnection {

	NSString* _vfsName;
	BOOL _attached;

}

@property (nonatomic,readonly) BOOL isProtectedDatabaseAttached;              //@synthesize attached=_attached - In the implementation block
-(void)dealloc;
-(void)close;
-(id)initWithConfiguration:(id)arg1 ;
-(BOOL)isProtectedDatabaseAttached;
-(int)attachProtectedDatabase;
-(int)detachProtectedDatabase;
-(const char*)_vfsModuleName;
@end
