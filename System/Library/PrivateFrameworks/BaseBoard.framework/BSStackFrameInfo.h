/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:09:04 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString;

@interface BSStackFrameInfo : NSObject {

	NSString* _realFunctionName;
	unsigned long long _address;
	NSString* _functionName;
	NSString* _executablePath;
	NSString* _className;

}

@property (nonatomic,readonly) unsigned long long address;              //@synthesize address=_address - In the implementation block
@property (nonatomic,readonly) NSString * functionName;                 //@synthesize functionName=_functionName - In the implementation block
@property (nonatomic,readonly) NSString * executableName; 
@property (nonatomic,readonly) NSString * executablePath;               //@synthesize executablePath=_executablePath - In the implementation block
@property (nonatomic,readonly) NSString * className;                    //@synthesize className=_className - In the implementation block
-(id)description;
-(unsigned long long)address;
-(NSString *)executablePath;
-(NSString *)className;
-(NSString *)functionName;
-(NSString *)executableName;
@end

