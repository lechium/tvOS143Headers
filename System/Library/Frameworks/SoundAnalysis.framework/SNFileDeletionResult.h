/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:17:33 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/SoundAnalysis.framework/SoundAnalysis
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/SNResult.h>

@class NSString, NSError;

@interface SNFileDeletionResult : NSObject <SNResult> {

	NSString* _fileName;
	NSError* _error;

}

@property (nonatomic,retain) NSString * fileName;                   //@synthesize fileName=_fileName - In the implementation block
@property (nonatomic,retain) NSError * error;                       //@synthesize error=_error - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
-(void)setFileName:(NSString *)arg1 ;
-(NSString *)fileName;
-(id)initWithFileName:(id)arg1 error:(id)arg2 ;
@end
