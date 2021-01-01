/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:10:22 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol _CNHandleStringClassificationStrategy;
@interface CNHandleStringClassifier : NSObject {

	id<_CNHandleStringClassificationStrategy> _classificationStrategy;

}

@property (nonatomic,readonly) id<_CNHandleStringClassificationStrategy> classificationStrategy;              //@synthesize classificationStrategy=_classificationStrategy - In the implementation block
+(id)classificationOfHandleStrings:(id)arg1 classificationQuality:(unsigned long long)arg2 ;
+(id)classificationStrategyForQuality:(unsigned long long)arg1 ;
+(id)classificationOfHandleStrings:(id)arg1 ;
-(id)description;
-(id)init;
-(id)initWithClassificationQuality:(unsigned long long)arg1 ;
-(void)classifyHandleString:(id)arg1 builder:(id)arg2 ;
-(id)initWithClassificationStrategy:(id)arg1 ;
-(unsigned long long)typeOfHandleString:(id)arg1 ;
-(id<_CNHandleStringClassificationStrategy>)classificationStrategy;
@end

