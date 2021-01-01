/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:19:49 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/SampleAnalysis.framework/SampleAnalysis
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString;

@interface SASourceInfo : NSObject {

	unsigned _lineNum;
	unsigned _columnNum;
	unsigned long long _offsetIntoSegment;
	unsigned long long _length;
	NSString* _filePath;

}

@property (readonly) unsigned long long offsetIntoSegment; 
@property (readonly) unsigned long long length;                             //@synthesize length=_length - In the implementation block
@property (readonly) NSString * filePath;                                   //@synthesize filePath=_filePath - In the implementation block
@property (readonly) NSString * fileName; 
@property (readonly) unsigned lineNum;                                      //@synthesize lineNum=_lineNum - In the implementation block
@property (readonly) unsigned columnNum;                                    //@synthesize columnNum=_columnNum - In the implementation block
@property (readonly) unsigned long long offsetIntoTextSegment; 
-(id)debugDescription;
-(unsigned long long)length;
-(NSString *)filePath;
-(NSString *)fileName;
-(unsigned long long)offsetIntoSegment;
-(unsigned)lineNum;
-(unsigned)columnNum;
-(unsigned long long)offsetIntoTextSegment;
@end

