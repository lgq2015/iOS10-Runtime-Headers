/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSAImageRenderingExporterDelegate : NSObject <TSARenderingExporterDelegate> {
    float mCompressionFactor;
    unsigned int mHeight;
    NSString *mImageType;
    TSARenderingExporter<TSKImageExporter> *mRenderingExporter;
    BOOL mScaleToFit;
    NSURL *mURL;
    unsigned int mWidth;
}

@property (nonatomic) float compressionFactor;
@property (nonatomic) unsigned int height;
@property (nonatomic, retain) NSString *imageType;
@property (nonatomic) BOOL scaleToFit;
@property (nonatomic) unsigned int width;

- (float)compressionFactor;
- (unsigned int)height;
- (id)imageType;
- (id)initWithRenderingExporter:(id)arg1;
- (struct CGContext { }*)newCGContextForURL:(id)arg1;
- (void)releaseCGContext:(struct CGContext { }*)arg1;
- (BOOL)scaleToFit;
- (void)setCompressionFactor:(float)arg1;
- (void)setHeight:(unsigned int)arg1;
- (void)setImageType:(id)arg1;
- (void)setScaleToFit:(BOOL)arg1;
- (void)setWidth:(unsigned int)arg1;
- (void)setup;
- (BOOL)supportsPaging;
- (BOOL)supportsRenderingQuality;
- (void)teardown;
- (float)viewScale;
- (unsigned int)width;

@end