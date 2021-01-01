/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:14:00 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <IMSharedUtilities/IMSharedUtilities-Structs.h>
@class NSURL, NSString;

@interface IMImageSource : NSObject {

	CGImageSourceRef _imageSourceRef;
	NSURL* _fileURL;

}

@property (nonatomic,readonly) BOOL fileExists; 
@property (nonatomic,readonly) CGImageSourceRef imageSourceRef;              //@synthesize imageSourceRef=_imageSourceRef - In the implementation block
@property (nonatomic,readonly) NSURL * fileURL;                              //@synthesize fileURL=_fileURL - In the implementation block
@property (nonatomic,readonly) NSString * filePath; 
-(void)dealloc;
-(NSURL *)fileURL;
-(NSString *)filePath;
-(id)initWithFileURL:(id)arg1 ;
-(BOOL)fileExists;
-(CGImageSourceRef)imageSourceRef;
@end
