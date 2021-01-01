/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:11:37 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/iCalendar.framework/iCalendar
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/ICSInputByteStream.h>

@protocol ICSInputByteStream;
@class NSString;

@interface ICSUnfoldingStream : NSObject <ICSInputByteStream> {

	id<ICSInputByteStream> _underStream;
	char _char1;
	char _char2;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(char)read;
-(void)_readTwo;
-(void)_shiftRead;
-(BOOL)eos;
-(id)initWithInputStream:(id)arg1 ;
@end
