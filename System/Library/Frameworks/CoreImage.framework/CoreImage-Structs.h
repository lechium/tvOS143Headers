/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:09:41 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, CIImage;

typedef struct CGSize {
	double width;
	double height;
} CGSize;

typedef struct BGHashMapContext* BGHashMapContextRef;

typedef struct {
	/*function pointer*/void* field1;
	= field2;
	unsigned long long field3;
	unsigned char field4[8];
	unsigned field5;
	unsigned field6;
	unsigned field7;
	unsigned field8;
} SCD_Struct_CI2;

typedef struct __IOSurface* IOSurfaceRef;

typedef struct __CVBuffer* CVBufferRef;

typedef struct {
	unsigned long long width;
	unsigned long long height;
	unsigned long long depth;
} SCD_Struct_CI5;

typedef struct {
	SCD_Struct_CI5 dispatchThreadgroups;
	SCD_Struct_CI5 threadsPerThreadgroup;
} SCD_Struct_CI6;

typedef struct {
	float lambda;
	unsigned N;
	unsigned short dims;
	float sigma_s;
	float sigma_r_luma;
} SCD_Struct_CI7;

typedef struct {
	 reference;
	 confidence;
	 disparity;
	 output;
} SCD_Struct_CI8;

typedef struct _NSZone* NSZoneRef;

typedef struct CGPoint {
	double x;
	double y;
} CGPoint;

typedef struct CGRect {
	CGPoint origin;
	CGSize size;
} CGRect;

typedef struct Projections_meanStdTable {
	float sumTable;
	float sumSqTable;
} Projections_meanStdTable;

typedef struct FastRegistration_Signatures {
	float piRow;
	unsigned long long nPiRow;
	Projections_meanStdTable piRowTable;
	float piCol;
	unsigned long long nPiCol;
	Projections_meanStdTable piColTable;
} FastRegistration_Signatures;

typedef struct GridROI_t {
	int startX;
	int startY;
	int endX;
	int endY;
} GridROI_t;

typedef struct __CFData* CFDataRef;

typedef struct CGImage* CGImageRef;

typedef struct CGColorSpace* CGColorSpaceRef;

typedef struct CGColor* CGColorRef;

typedef struct CGContext* CGContextRef;

typedef struct CGLayer* CGLayerRef;

typedef struct __CFDictionary* CFDictionaryRef;

typedef struct CIPredictionModelImageFeatures {
	NSString* name;
	long long width;
	long long height;
	unsigned format;
} CIPredictionModelImageFeatures;

typedef struct {
	CGPoint field1;
	CGPoint field2;
	CGPoint field3;
	CGPoint field4;
	CGRect field5;
	id field6;
} SCD_Struct_CI23;

typedef const struct CGImageMetadata* CGImageMetadataRef;

typedef struct CGSRegionObject* CGSRegionObjectRef;

typedef struct __CFString* CFStringRef;

typedef struct __CFArray* CFArrayRef;

typedef struct CGDataConsumer* CGDataConsumerRef;

typedef struct __CFURL* CFURLRef;

typedef struct CGImageSource* CGImageSourceRef;

typedef struct {
	double focalLength;
	double lineSearchRangeV;
	double lineSearchRangeH;
	double pitchLimit;
	double yawLimit;
	double rollLimit;
	CIImage* saliencyHeatmap;
} SCD_Struct_CI31;

typedef struct {
	double field1;
	double field2;
	double field3;
	double field4;
	double field5;
	double field6;
	id field7;
} SCD_Struct_CI32;

typedef struct OpaqueVTPixelTransferSession* OpaqueVTPixelTransferSessionRef;

typedef struct {
	/*function pointer*/void* field1;
	/*function pointer*/void* field2;
	/*function pointer*/void* field3;
	/*function pointer*/void* field4;
	/*function pointer*/void* field5;
} SCD_Struct_CI34;

typedef struct {
	char* baseAddress;
	int width;
	int height;
	int rowSamples;
	int rowBytes;
	int size;
	int samplesPerPixel;
	int bytesPerSample;
	float resolution;
} SCD_Struct_CI35;

typedef struct {
	GridROI_t FR;
	CGPoint leftEye;
	CGPoint rightEye;
	GridROI_t LR;
	GridROI_t RR;
	float leftDistMatrix[4];
	float rightDistMatrix[4];
	CGPoint LPoly[8];
	CGPoint RPoly[8];
	float IOD;
} SCD_Struct_CI36;

typedef struct CGAffineTransform {
	double a;
	double b;
	double c;
	double d;
	double tx;
	double ty;
} CGAffineTransform;

typedef struct {
	float xf;
	float yf;
	float xfi;
	float yfi;
	float ify;
	int ioffx;
	int ioffy;
	int downsampleType;
	float downsampleOversizeX;
	float downsampleOversizeY;
	int gradientChannel;
	int edgeFindingChannel;
	float minMagnitude;
	float regressionRadius;
	float capture;
	float alignmentTolerance;
	float connectThreshold;
	BOOL forceFail;
	CGRect inputImageExtent;
	int orientation;
	int cameraType;
	int faceIndex;
	int side;
	float scale;
	float IOD;
	CGAffineTransform transform;
	int height;
} SCD_Struct_CI38;

typedef struct {
	int width;
	int height;
	CGAffineTransform T;
	CGAffineTransform Tp;
	SCD_Struct_CI35 O;
	SCD_Struct_CI35 OO;
	BOOL computeEyePolygon;
	SCD_Struct_CI35 EP;
	BOOL maskRender;
	SCD_Struct_CI35 D;
	BOOL computeGradient;
	SCD_Struct_CI35 G;
	SCD_Struct_CI35 M;
	BOOL computeShine;
	SCD_Struct_CI35 S;
	SCD_Struct_CI35 P;
} SCD_Struct_CI39;

typedef struct {
	int width;
	int height;
	float scaleFactor;
	/*function pointer*/void* grid;
	int nPoints;
	int maxPoints;
	/*function pointer*/void* points;
	int nextNetNumber;
	int nThreads;
	int maxThreads;
	/*function pointer*/void* threads;
	int nShapes;
	int maxShapes;
	/*function pointer*/void* shapes;
} SCD_Struct_CI40;

typedef struct {
	float skinval;
	float avgLuminance;
	float minLuminance;
	float maxLuminance;
	float darkPercent;
	float clipPercent;
} SCD_Struct_CI41;

typedef struct {
	double variance;
	int nNonZero;
} SCD_Struct_CI42;

typedef struct {
	float field1;
	float field2;
	float field3;
	float field4;
	float field5;
	int field6;
	int field7;
	int field8;
	float field9;
	float field10;
	int field11;
	int field12;
	float field13;
	float field14;
	float field15;
	float field16;
	float field17;
	BOOL field18;
	CGRect field19;
	int field20;
	int field21;
	int field22;
	int field23;
	float field24;
	float field25;
	CGAffineTransform field26;
	int field27;
} SCD_Struct_CI43;

typedef struct {
	CGPoint field1;
	CGPoint field2;
	CGPoint field3;
	CGPoint field4;
	GridROI_t field5;
	float field6[4];
	float field7[4];
	GridROI_t field8[8];
	GridROI_t field9[8];
	float field10;
} SCD_Struct_CI44;

typedef struct {
	int field1;
	float field2;
	float field3;
	float field4;
	float field5;
	float field6;
	float field7;
} SCD_Struct_CI45;

typedef struct {
	int field1;
	SCD_Struct_CI45 field2[20];
} SCD_Struct_CI46;

typedef struct {
	int field1;
	int field2;
	int field3;
	int field4;
	float field5;
} SCD_Struct_CI47;

typedef struct {
	int field1;
	SCD_Struct_CI47 field2[20];
} SCD_Struct_CI48;

typedef struct {
	BOOL field1;
	int field2;
	int field3;
	CGPoint field4;
} SCD_Struct_CI49;

typedef struct {
	float field1;
	float field2;
	float field3;
	float field4;
} SCD_Struct_CI50;

typedef struct {
	SCD_Struct_CI5 field1;
	0 field2;
	float field3;
	float field4;
	float field5;
	float field6;
	float field7;
	float field8;
	float field9;
	float field10;
	float field11;
} SCD_Struct_CI51;

typedef struct {
	int field1;
	int field2;
	/*function pointer*/void* field3;
	int field4;
	int field5;
	int field6;
} SCD_Struct_CI52;

typedef struct {
	int field1;
	int field2;
	int field3;
	float field4;
	float field5;
	int field6;
	BOOL field7;
	BOOL field8;
	BOOL field9;
	int field10;
	int field11;
	float field12;
	float field13;
	float field14;
	float field15;
	SCD_Struct_CI5 field16;
	0 field17;
	SCD_Struct_CI5 field18;
	0 field19;
	float field20;
	int field21;
	int field22;
} SCD_Struct_CI53;

typedef struct {
	float field1;
	float field2;
	float field3;
} SCD_Struct_CI54;

typedef struct {
	CGPoint field1;
	int field2;
	float field3;
} SCD_Struct_CI55;

typedef struct {
	float field1[4];
	float field2[4];
	float field3[4];
	int field4[4];
} SCD_Struct_CI56;

typedef struct {
	int field1;
	int field2;
	float field3;
	/*function pointer*/void* field4;
	int field5;
	int field6;
	/*function pointer*/void* field7;
	int field8;
	int field9;
	int field10;
	/*function pointer*/void* field11;
	int field12;
	int field13;
	/*function pointer*/void* field14;
} SCD_Struct_CI57;

typedef struct float3x3 {
	[3 columns];
} float3x3;

typedef struct _compressed_pair<CI::Perspective::Line *, std::__1::allocator<CI::Perspective::Line> > {
	/*function pointer*/void* __value_;
} compressed_pair<CI::Perspective::Line *, std::__1::allocator<CI::Perspective::Line> >;

typedef struct vector<CI::Perspective::Line, std::__1::allocator<CI::Perspective::Line> > {
	/*function pointer*/void* __begin_;
	/*function pointer*/void* __end_;
	compressed_pair<CI::Perspective::Line *, std::__1::allocator<CI::Perspective::Line> > __end_cap_;
} vector<CI::Perspective::Line, std::__1::allocator<CI::Perspective::Line> >;

typedef struct _compressed_pair<LineCostProxy *, std::__1::allocator<LineCostProxy> > {
	LineCostProxy __value_;
} compressed_pair<LineCostProxy *, std::__1::allocator<LineCostProxy> >;

typedef struct vector<LineCostProxy, std::__1::allocator<LineCostProxy> > {
	LineCostProxy __begin_;
	LineCostProxy __end_;
	compressed_pair<LineCostProxy *, std::__1::allocator<LineCostProxy> > __end_cap_;
} vector<LineCostProxy, std::__1::allocator<LineCostProxy> >;

typedef struct Solution {
	float rX;
	float rY;
	float rZ;
	float cost;
} Solution;

typedef struct {
	BOOL field1;
	float field2;
	float field3;
	float field4;
	float field5;
	float field6[3];
} SCD_Struct_CI64;

typedef struct {
	void plan;
	int network_index;
} SCD_Struct_In65;

typedef struct {
	float field1;
	float field2;
	float field3;
	float field4;
	BOOL field5;
} SCD_Struct_In66;

typedef struct {
	void field1;
	void field2;
	unsigned long long field3[4];
	unsigned long long field4[4];
	unsigned long long field5;
	unsigned long long field6;
	unsigned long long field7;
	unsigned long long field8;
	unsigned long long field9;
	unsigned long long field10;
	unsigned long long field11;
	unsigned long long field12;
	unsigned long long field13;
	unsigned long long field14;
	int field15;
} SCD_Struct_In67;

typedef union {
	double vec[4];
	double ptr;
} SCD_Union_CI68;

typedef struct PseudoRand {
	unsigned u;
	unsigned v;
} PseudoRand;

typedef struct {
	float left;
	float top;
	float width;
	float height;
	float zeroShiftPercentile;
} SCD_Struct_XF70;

typedef struct {
	float field1;
	float field2;
	float field3;
	float field4;
	float field5;
	float field6;
	float field7;
	float field8;
	float field9;
	float field10;
	unsigned field11;
} SCD_Struct_XF71;

typedef struct {
	unsigned field1;
	unsigned field2;
	unsigned field3;
	unsigned field4;
	unsigned field5;
	float field6;
	BOOL field7;
} SCD_Struct_XM72;

typedef struct {
	unsigned internalWidth;
	unsigned internalHeight;
	unsigned spatialRadius;
	unsigned temporalRadius;
	unsigned arrayLength;
	float epsilon;
	BOOL disableForSameResolution;
} SCD_Struct_XM73;

typedef struct {
	unsigned internalWidth;
	unsigned internalHeight;
	unsigned radius;
	unsigned subsampling;
	float epsilon;
	unsigned iterations;
	BOOL useDepthFilter;
	float fgThresholdValue;
	float bgThresholdValue;
	unsigned erosionKernelSize;
	unsigned resolutionMode;
} SCD_Struct_XM74;

typedef struct {
	char field1[256];
	char field2[32];
	GridROI_t field3;
	int field4;
	int field5;
	CGColorSpace field6;
	SCD_Struct_CI35 field7;
	unsigned field8;
	int field9;
	int field10;
	BOOL field11;
	float field12;
} SCD_Struct_CI75;

typedef struct CGImageBlockSet* CGImageBlockSetRef;

typedef struct {
	void bitmapproc_context;
	/*function pointer*/void* bproc;
	int orientation;
	float SNR;
	BOOL N90;
	int redBitmaskArea;
	float imageCenterX;
	float imageCenterY;
	float halfDiagonalSize;
} SCD_Struct_CI77;

typedef struct {
	CGPoint centroid;
	int area;
	float ovalness;
	float contrast;
	float mincontrast;
	int nborder;
	GridROI_t IR;
	float aspectRatio;
	BOOL touchingEdge;
	int localmax;
	int localmaxrow;
	int localmaxcol;
	int localfloor;
	float rgmean;
	float rgstd;
	float ymean;
	float ystd;
} SCD_Struct_CI78;

typedef struct {
	int origHitX;
	int origHitY;
	int snapHitX;
	int snapHitY;
	int bitmaskSeedX;
	int bitmaskSeedY;
	int bitmaskThreshold;
	int cornealReflectionSeedX;
	int cornealReflectionSeedY;
	int cornealReflectionThreshold;
	BOOL align;
	GridROI_t mTemplate;
	GridROI_t existingTemplate;
	int averageSkinMapY;
	int characterizeCase;
	int finalEyeCase;
	float IOD;
	SCD_Struct_CI77 O;
	GridROI_t CR;
} SCD_Struct_CI79;

typedef struct {
	int tag;
	CGPoint pt2;
	int eyeCase;
	int forceCase;
	int npixels;
	int bignpixels;
	SCD_Struct_CI35 fullNew;
	GridROI_t YR;
	GridROI_t psTemplate;
	BOOL pupilShadeAlignment;
	GridROI_t matchingTemplate;
	int faceIndex;
	BOOL left;
	float IOD;
	SCD_Struct_CI79 data;
	SCD_Struct_CI78 BI;
} SCD_Struct_CI80;

typedef struct {
	float a;
	float b;
	float c;
} SCD_Struct_CI81;

typedef struct {
	int field1;
	SCD_Struct_CI7 field2;
	int field3;
	int field4;
	int field5;
	int field6;
	SCD_Struct_CI7 field7;
	CGPoint field8;
	GridROI_t field9;
	BOOL field10;
	GridROI_t field11;
	int field12;
	BOOL field13;
	float field14;
	GridROI_t field15;
	9 field16;
	SCD_Struct_CI35 field17;
	8 field18;
} SCD_Struct_CI82;

typedef struct {
	float field1;
	int field2;
	int field3;
	float field4;
	float field5;
	float field6;
	int field7;
	int field8;
	float field9;
} SCD_Struct_CI83;

typedef struct {
	int field1;
	SCD_Struct_CI83 field2[4];
} SCD_Struct_CI84;

typedef struct {
	BOOL field1;
	int field2;
	int field3;
	float field4;
	float field5;
	int field6;
	int field7;
	int field8;
	int field9;
	float field10;
	float field11;
	int field12;
	int field13;
	int field14;
	int field15;
} SCD_Struct_CI85;

typedef struct {
	int field1;
	int field2;
	BOOL field3;
	BOOL field4;
	float field5;
	int field6;
	int field7;
	int field8;
	int field9;
} SCD_Struct_CI86;

typedef struct {
	int field1;
	int field2;
	int field3;
	int field4;
	int field5;
	int field6;
	int field7;
	int field8;
	int field9;
	int field10;
	BOOL field11;
	SCD_Struct_CI7 field12;
	GridROI_t field13;
	int field14;
	int field15;
	int field16;
	float field17;
	GridROI_t field18;
	7 field19;
	GridROI_t field20;
} SCD_Struct_CI87;
