/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:14:46 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/LoggingSupport.framework/LoggingSupport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface _OSLogDirectoryReference : NSObject {

	int _fd;
	long long _etk;

}

@property (nonatomic,readonly) int fileDescriptor; 
-(void)dealloc;
-(void)close;
-(int)fileDescriptor;
-(id)initWithDescriptor:(int)arg1 ;
-(id)initWithDescriptor:(int)arg1 sandboxExtensionToken:(const char*)arg2 ;
@end

