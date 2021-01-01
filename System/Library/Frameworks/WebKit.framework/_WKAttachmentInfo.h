/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:12:27 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <WebKit/WebKit-Structs.h>
@class NSString, NSData, NSFileWrapper;

@interface _WKAttachmentInfo : NSObject {

	RetainPtr<NSFileWrapper>* _fileWrapper;
	RetainPtr<NSString>* _mimeType;
	RetainPtr<NSString>* _utiType;
	RetainPtr<NSString>* _filePath;

}

@property (nonatomic,readonly) NSString * contentType; 
@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) NSString * filePath; 
@property (nonatomic,readonly) NSData * data; 
@property (nonatomic,readonly) NSFileWrapper * fileWrapper; 
-(NSString *)name;
-(NSData *)data;
-(NSString *)contentType;
-(NSString *)filePath;
-(NSFileWrapper *)fileWrapper;
-(id)initWithFileWrapper:(id)arg1 filePath:(id)arg2 mimeType:(id)arg3 utiType:(id)arg4 ;
@end

